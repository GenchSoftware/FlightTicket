#pragma once
#include "stdafx.h"
#include "dataList.h"

void flightSearch(int id);
void flightLineSearch(int id, int hour_min, int min_min, int hour_max, int min_max);
int book(int flightCode, int uuid, char name[10]);

//struct tm {
//    int tm_sec;  //����Ŀǰ����, ������ΧΪ0-59, ��������61 ��
//    int tm_min;  //����Ŀǰ����, ��Χ0-59
//    int tm_hour;  //����ҹ�����ʱ��, ��ΧΪ0-23
//    int tm_mday;  //Ŀǰ�·ݵ�����, ��Χ01-31
//    int tm_mon;  //����Ŀǰ�·�, ��һ������, ��Χ��0-11
//    int tm_year;  //��1900 ���������������
//    int tm_wday;  //һ���ڵ�����, ������һ����, ��ΧΪ0-6
//    int tm_yday;  //�ӽ���1 ��1 ���������������, ��ΧΪ0-365
//    int tm_isdst;  //����ʱ
//};