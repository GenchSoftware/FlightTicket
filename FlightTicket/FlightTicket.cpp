// homework19.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "init.h"
#include "dataList.h"
#include "nav.h"

extern flightLineInfo flightLine;
extern flightInfo flight;
extern ticketInfo ticket;
int main() {
    init();
    while (1) {
        showNav();
        system("cls");
    }
    system("pause");
    return 0;
}

