/*
* init.h
* (c)copyright ������ ��ӱ�� 2016-2017 gench.edu.cn all right reserved.
****************************
* ��ڳ�ʼ�����ܳ���
*/
#pragma once

#include "stdafx.h"
#include "dataListInit.h"
#include "dataList.h"
#include "dataInit.h"

void init();
void initDisplay();
void displayProgress(int progress, char *status);
void error(char *s);