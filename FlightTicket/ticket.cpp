/*
* ticket.cpp
* (c)copyright ������ ��ӱ�� 2016-2017 gench.edu.cn all right reserved.
****************************
* ��Ʊϵͳ��س���
*/
#include "ticket.h"

extern flightLineInfo flightLine;
extern flightInfo flight;
extern ticketInfo ticket;

void flightSearch(int id) {
    flightLineInfo flightline_s;
    flightInfo flight_s;
    int status = 1;
    
    flight_s = flight->next;
    flightline_s = flightLine->next;

    system("cls");
    printf("\t�������������������������������� ���ࣺ%6d ��������������������������������������������\n", id);
    printf("\t�����߱��      ��ɻ���        �������        ���ʱ��        ���    Ʊ��    ��Ʊ    ��\n");
    printf("\t������������������������������������������������������������������������������������������\n");
    while (flight_s) {
        //�ж���������һ�������
        if (flight_s->data.flightCode == id) {
            while (flightline_s) {
                if (flightline_s->data.lineCode == flight_s->data.lineCode) {
                    printf("\t��%d\t\t%s\t\t%s\t\t%d\:%2d\t\t%d\t%d\t%d\t��\n",
                        flight_s->data.lineCode,
                        flightline_s->data.start,
                        flightline_s->data.end,
                        flight_s->data.time[0],
                        flight_s->data.time[1],
                        flightline_s->data.kilometer,
                        flight_s->data.price,
                        flight_s->data.amount
                    );
                    break;
                }
                flightline_s = flightline_s->next;
            }
            if (flight_s->data.status == 0) {
                printf("\t�����棺���κ����Ʊ�����ã�                                                            ��\n");
                status = 0;
                break;
            }
            if (flight_s->data.amount == 0) {
                printf("\t�����棺���κ����Ʊ�Ѿ��ۿգ�                                                          ��\n");
                status = 0;
            }
            printf("\t������������������������������������������������������������������������������������������\n\n\n");
            if (status == 1) {
                int nav;
                printf("\n\n\n\t���Ƿ񶩹����κ���Ļ�Ʊ��(0/1)                                                         ��");
                printf("\r\t���Ƿ񶩹����κ���Ļ�Ʊ��(0/1)");
                scanf("%d", &nav);
                if (nav == 1) {
                    int uuid;
                    char name[10];
                    printf("\t�����������Ļ�Ա��ID��                                                                  ��");
                    printf("\r\t�����������Ļ�Ա��ID��");
                    scanf("%d", &uuid);
                    printf("\t����������������:                                                                       ��");
                    printf("\r\t����������������:");
                    scanf("%s", name);
                    int succ;
                    succ = book(id, uuid, name);
                    system("pause");
                }
            }
            return;
        }
        flight_s = flight_s->next;
        flightline_s = flightline_s->next;
    }
    printf("\t�����棺�޴˺��࣬���飡                                                              ��\n");
    printf("\t������������������������������������������������������������������������������������������\n");
    system("pause");
}

void flightLineSearch(int id, int hour_min, int min_min, int hour_max, int min_max) {
    flightLineInfo flightline_s;
    flightInfo flight_s;

    int count = 0;
    flight_s = flight->next;
    flightline_s = flightLine->next;

    system("cls");
    printf("\t������������������������������������������������������������������������������������������\n");
    printf("\t��������      ��ɻ���        �������        ���ʱ��        ���    Ʊ��    ��Ʊ    ��\n");
    printf("\t������������������������������������������������������������������������������������������\n");

    while (flight_s) {
        int timeFlight, timeMax, timeMin;
        timeFlight = flight_s->data.time[0] * 60 + flight_s->data.time[1];
        timeMax = hour_max * 60 + min_max;
        timeMin = hour_min * 60 + min_min;
        if (flight_s->data.lineCode == id && timeFlight <= timeMax && timeFlight >= timeMin) {
            count += 1;
            while (flightline_s) {
                if (flightline_s->data.lineCode == flight_s->data.lineCode) {
                    printf("\t��%d\t\t%s\t\t%s\t\t%d\:%2d\t\t%d\t%d\t%d\t��\n",
                        flight_s->data.flightCode,
                        flightline_s->data.start,
                        flightline_s->data.end,
                        flight_s->data.time[0],
                        flight_s->data.time[1],
                        flightline_s->data.kilometer,
                        flight_s->data.price,
                        flight_s->data.amount
                    );
                    break;
                }
                flightline_s = flightline_s->next;
            }
            if (flight_s->data.status == 0) {
                printf("\t�����棺���κ����Ʊ�����ã�                                                            ��\n");
                break;
            }
            if (flight_s->data.amount == 0) {
                printf("\t�����棺���κ����Ʊ�Ѿ��ۿգ�                                                          ��\n");
            }
            printf("\t������������������������������������������������������������������������������������������\n");
        }

        flight_s = flight_s->next;
    }
    if (count == 0) {
        printf("\t�����棺�޴˺��࣬���飡                                                              ��\n");
        printf("\t������������������������������������������������������������������������������������������\n");
        system("pause");
        return;
    }
    int nav;
    printf("\n\n\n\t���Ƿ����������Ʊ��(0/1)                                                               ��");
    printf("\r\t���Ƿ����������Ʊ��(0/1)");
    scanf("%d", &nav);
    if (nav == 1) {
        int flightid;
        printf("\n\n\n\t����������Ҫ������һ�κ���Ļ�Ʊ��                                                      ��");
        printf("\r\t����������Ҫ������һ�κ���Ļ�Ʊ��");
        scanf("%d", &flightid);
        printf("\n\n\n\t������Ϊ����ת�������ѯ���棡                                                          ��");
        Sleep(200);
        flightSearch(flightid);
    }
}

int book(int flightCode, int uuid, char name[10]) {
    flightInfo flight_s;
    ticketInfo ticket_s;
    ticketInfo temp;

    time_t timep;
    struct tm *p;
    time(&timep);
    p = localtime(&timep);

    int ticketTime[5];

    ticketTime[0] = 1900 + p->tm_year;
    ticketTime[1] = 1 + p->tm_mon;
    ticketTime[2] = p->tm_mday;
    ticketTime[3] = p->tm_hour;
    ticketTime[4] = p->tm_min;

    flight_s = flight->next;
    ticket_s = ticket->next;

    while (flight_s) {
        if (flight_s->data.flightCode == flightCode && flight_s->data.amount != 0) {
            flight_s->data.amount -= 1;
            temp = (ticketInfo)malloc(sizeof(ticketInfoNode));
            temp->next = ticket_s->next;
            temp->data.flightCode = flightCode;
            strcpy(temp->data.userName, name);
            temp->data.uuid = uuid;
            temp->data.ticketTime[0] = ticketTime[0];
            temp->data.ticketTime[1] = ticketTime[1];
            temp->data.ticketTime[2] = ticketTime[2];
            temp->data.ticketTime[3] = ticketTime[3];
            temp->data.ticketTime[4] = ticketTime[4];
            ticket_s->next = temp;
            saveAll();
            return 0;
        }

        flight_s = flight_s->next;
        ticket_s = ticket_s->next;
    }
    return 1;
}

void saveAll() {
    flightInfo flight_s;
    ticketInfo ticket_s;

    flight_s = flight->next;
    ticket_s = ticket->next;

    //����洢
    FILE *fpFlight;
    if ((fpFlight = fopen("dataFlight.txt", "w")) == NULL) {
        printf("\nError:C404 �޷��ҵ����������ļ�!\n");
        system("pause");
        exit(1);
        return;
    }
    while (flight_s) {
        fprintf(fpFlight, "%d %d %d %d %d %d %d\n",
            flight_s->data.flightCode,
            flight_s->data.lineCode,
            flight_s->data.time[0],
            flight_s->data.time[1],
            flight_s->data.price,
            flight_s->data.amount,
            flight_s->data.status);
        flight_s = flight_s->next;
    }
    fclose(fpFlight);

    //Ʊ��洢
    FILE *fpTicket;
    if ((fpTicket = fopen("dataTicket.txt", "w")) == NULL) {
        printf("\nError:C404 �޷��ҵ�Ʊ�������ļ�!\n");
        system("pause");
        exit(1);
        return;
    }
    while (ticket_s) {
        fprintf(fpTicket, "%d %d %d %d %d %d %d %s\n",
            ticket_s->data.flightCode,
            ticket_s->data.uuid,
            ticket_s->data.ticketTime[0],
            ticket_s->data.ticketTime[1],
            ticket_s->data.ticketTime[2],
            ticket_s->data.ticketTime[3],
            ticket_s->data.ticketTime[4],
            ticket_s->data.userName);
        ticket_s = ticket_s->next;
    }
    fclose(fpTicket);

}