/*
* dataList.h
* (c)copyright ������ ��ӱ�� 2016-2017 gench.edu.cn all right reserved.
****************************
* ���������ʽ�洢�ṹ
*/

#pragma once
#include "stdafx.h"

/*
* flightLineInfo
*������Ϣ��ش洢����
********************************
* @pragma lineCode ���߱���
* @pragma startCode ����������
* @pragma endCode �յ��������
* @pragma kilometer ���๫����
* @pragma min ����ʱ��(min)
*/
typedef struct {
    int lineCode;
    int startCode;
    int endCode;
    int kilometer;
    int min;
}flightLineData;

typedef struct flightLineInfoNode {
    flightLineData data;
    struct flightLineInfoNode *next;
}flightLineInfoNode, *flightLineInfo;

/*
* flightInfo
*������Ϣ��ش洢����
********************************
* @pragma flightCode �������
* @pragma lineCode ���߱���
* @pragma time[2] ���ʱ��[Сʱ][����]
* @pragma price Ʊ��
* @pragma amount ���ۻ�Ʊ����
* @pragma status ��ǰ״̬
*/
typedef struct {
    int flightCode;
    int lineCode;
    int time[2];
    int price;
    int amount;
    int status;
}flightData;

typedef struct flightInfoNode {
    flightData data;
    struct flightInfoNode *next;
}flightInfoNode, *flightInfo;

/*
* ticketInfo
*��Ʊ��Ϣ��ش洢����
********************************
* @pragma flightCode �������
* @pragma uuid �˿�ID
* @pragma username[10] ����
* @pragma ticketTime[5] ��Ʊʱ��[��/��/��/Сʱ/����]
*/
typedef struct {
    int flightCode;
    int uuid;
    char userName[10];
    int ticketTime[5];
}ticketData;

typedef struct ticketInfoNode {
    ticketData data;
    struct ticketInfoNode *next;
}ticketInfoNode, *ticketInfo;
