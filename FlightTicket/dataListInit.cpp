/*
* dataListInit.cpp
* (c)copyright ������ ��ӱ�� 2016-2017 gench.edu.cn all right reserved.
****************************
* ��ʼ�������ʽ�洢�ṹ
* �������ݳ�ʼ������
*/

#include "dataListInit.h"

// ��ʼ���������ݿ�����
flightLineInfo initFlightLine(){
    flightLineInfo info;
    info = (flightLineInfo)malloc(sizeof(flightInfoNode));
    info->next = NULL;
    return info;
}


//��ʼ���������ݿ�����
flightInfo initFlight() {
    flightInfo info;
    info = (flightInfo)malloc(sizeof(flightInfoNode));
    info->next = NULL;
    return info;
}


//��ʼ��Ʊ�����ݿ�����
ticketInfo initTicket() {
    ticketInfo info;
    info = (ticketInfo)malloc(sizeof(ticketInfoNode));
    info->next = NULL;
    return info;
}