/*
* user.cpp
* (c)copyright ������ ��ӱ�� 2016-2017 gench.edu.cn all right reserved.
****************************
* �û���ѯϵͳ��س���
*/
#include "user.h"

extern ticketInfo ticket;
void userSearch() {
    int uuid, count = 0;
    system("cls");
    printf("\n\n\n\n");
    printf("\t\t\t\t**************************************\n");
    printf("\t\t\t\t��������������������������������������\n");
    printf("\t\t\t\t��    ��ӭʹ�ú����û���ѯϵͳ��    ��\n");
    printf("\t\t\t\t��������������������������������������\n");
    printf("\t\t\t\t**************************************\n");
    printf("\t\t\t\t���������û�ID��                      ��");
    printf("\r\t\t\t\t���������û�ID��");
    scanf("%d", &uuid);
    ticketInfo p;
    p = ticket->next;
    printf("\n\n\n");
    printf("\t\t\t\t��������������������������������������������������\n");
    printf("\t\t\t\t��  �����\t����\t��Ʊ����\t\t��\n");
    while (p) {
        if (p->data.uuid == uuid) {
            printf("\t\t\t\t��������������������������������������������������\n");
            printf("\t\t\t\t��%d\t\t%s\t%d��%d��%d��%d��%d��\t��\n", p->data.flightCode, p->data.userName, p->data.ticketTime[0], p->data.ticketTime[1], p->data.ticketTime[2], p->data.ticketTime[3], p->data.ticketTime[4]);
            count += 1;
        }
        p = p->next;
    }
    printf("\t\t\t\t��������������������������������������������������\n");
    if (count == 0) {
        printf("\n\t\t\t\tUUID������޹�Ʊ��Ϣ����˶Ժ��ٴβ�ѯ��");
        system("pause");
        userSearch();
    }
    system("pause");
}