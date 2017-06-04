/*
* init.cpp
* (c)copyright ������ ��ӱ�� 2016-2017 gench.edu.cn all right reserved.
****************************
* ��ڳ�ʼ�����ܳ���
*/
#include "init.h"

flightLineInfo flightLine;
flightInfo flight;
ticketInfo ticket;

void init() {
    initDisplay();
    displayProgress(10, "���ڼ��غ���ģ��.");
    Sleep(500);
    flightLine = initFlightLine();
    displayProgress(40, "���ڼ��غ���ģ��");
    Sleep(400);
    flight = initFlight();
    displayProgress(70, "���ڼ���Ʊ��ģ��");
    Sleep(500);
    ticket = initTicket();
    displayProgress(100, "ģ�������ϣ�");
    Sleep(500);
    displayProgress(1, "���ڼ��غ�������");
    createLineList(flightLine);
    Sleep(500);
    displayProgress(34, "���ڼ��غ�������");
    createFlightList(flight);
    Sleep(500);
    displayProgress(67, "���ڼ���Ʊ������");
    createTicketList(ticket);
    Sleep(500);
    displayProgress(100, "���ݼ�����ϣ�");
    Sleep(500);
    for (int i = 1; i <= 100; i++) {
        displayProgress(i, "���ڼ��ص���ϵͳ:");
        Sleep(20);
    }
    system("cls");
}

//initDisplay ��ʼ������ӭ����
void initDisplay() {

    for (int i = 0; i < 10; i++) {
        printf("\n");
    }
    printf("\t\t\t\t��ӭʹ�ú��չ�˾��Ʊϵͳ��\n");
    printf("\n\n");
    printf("\t\t\t\t\t\tCopyright (c) ������/��ӱ�� 2016-2017 ALL right reserved.\n");
    printf("\n\n\n\n\n");
    printf("���ڳ�ʼ��ϵͳģ�飬���Ժ�.....\n");
    Sleep(2000);
}

//��������ʾ����
void displayProgress(int progress,char *status) {
    int len = 50, pro = progress / 2;
    char bar[50];
    for (int i = 0; i < len; i++) {
        bar[i] = '-';
    }
    printf("\r%s  \t��ǰ����:%d %% \t[",status,progress);
    for (int i = 0; i < pro; i++) {
        printf(">");
    }
    for (int i = pro; i < len; i++) {
        printf("-");
    }
    printf("]");
    if (progress == 100) {
        printf("\n");
    }
    fflush(stdout);
}
//������
void error(char *s) {
    printf("\n%s", s);
    system("pause");
    exit(1);
}