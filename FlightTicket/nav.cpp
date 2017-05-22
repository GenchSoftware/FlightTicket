#include "nav.h"

void showNav() {
    int nav;
    printf("\n\n\n\n");
    printf("\t\t\t\t**************************************\n");
    printf("\t\t\t\t┌─────────────────┐\n");
    printf("\t\t\t\t├    欢迎使用建桥航空订票系统！    ┤\n");
    printf("\t\t\t\t├─────────────────┤\n");
    printf("\t\t\t\t├      请选择您需要的服务内容      ┤\n");
    printf("\t\t\t\t└─────────────────┘\n");
    printf("\t\t\t\t**************************************\n");
    printf("\n\n\n");
    printf("\t\t\t\t  ┌───────────────┐\n");
    printf("\t\t\t\t  ├1.自助查询系统                ┤\n");
    printf("\t\t\t\t  ├───────────────┤\n");
    printf("\t\t\t\t  ├2.票务系统                    ┤\n");
    printf("\t\t\t\t  ├───────────────┤\n");
    printf("\t\t\t\t  ├3.退出系统                    ┤\n");
    printf("\t\t\t\t  └───────────────┘\n\n\n");
    printf("\t\t\t\t  ├请选择：                      ┤");
    printf("\r\t\t\t\t  ├请选择：");
    scanf("%d", &nav);
    switch (nav) {
    case 1: {
        infoNav();
        return;
    }
    case 2: {
        ticketNav();
        return;
    }
    case 3:
        exit(1);
    default:
        printf("\t\t\t\t  ├请选择：                      ┤");
        printf("\r输入错误，请重新输入！\t\t  ├请选择：");
        return;
    }
}


void infoNav() {
    system("cls");
    int nav;
    printf("\n\n\n\n");
    printf("\t\t\t\t**************************************\n");
    printf("\t\t\t\t┌─────────────────┐\n");
    printf("\t\t\t\t├    欢迎使用建桥航空查询系统！    ┤\n");
    printf("\t\t\t\t├─────────────────┤\n");
    printf("\t\t\t\t├      请选择您需要的服务内容      ┤\n");
    printf("\t\t\t\t└─────────────────┘\n");
    printf("\t\t\t\t**************************************\n");
    printf("\n\n\n");
    printf("\t\t\t\t  ┌───────────────┐\n");
    printf("\t\t\t\t  ├1.客户信息查询                ┤\n");
    printf("\t\t\t\t  ├───────────────┤\n");
    printf("\t\t\t\t  ├2.航班信息查询                ┤\n");
    printf("\t\t\t\t  ├───────────────┤\n");
    printf("\t\t\t\t  ├3.返回主菜单                  ┤\n");
    printf("\t\t\t\t  ├───────────────┤\n");
    printf("\t\t\t\t  ├4.退出系统                    ┤\n");
    printf("\t\t\t\t  └───────────────┘\n\n\n");
    printf("\t\t\t\t  ├请选择：                      ┤");
    printf("\r\t\t\t\t  ├请选择：");
    while (true) {
        scanf("%d", &nav);
        switch (nav) {
        case 1:
            userSearch();
            return;
        case 2:
        case 3:
            return;
        case 4:
            exit(1);
        default:
            printf("\t\t\t\t  ├请选择：                      ┤");
            printf("\r输入错误，请重新输入！\t\t  ├请选择：");
            break;
        }
    }
}

void ticketNav() {

}