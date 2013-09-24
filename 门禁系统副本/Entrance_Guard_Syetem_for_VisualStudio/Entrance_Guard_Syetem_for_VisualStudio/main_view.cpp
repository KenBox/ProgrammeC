//
//  main_view.c
//  Entrance_Guard_System
//
//  Created by shangde on 13-9-24.
//  Copyright (c) 2013年 Ken. All rights reserved.
//
#include "StdAfx.h"
#include <stdio.h>
void printmain_view(){
    printf("欢迎进入门禁系统\n");
    printf("1.门禁管理\n");
    printf("2.后台管理\n");
    printf("3.帮助信息\n");
    printf("4.退出程序\n");
    return;
}

void printmain_view_c1(){
    printf("\n=====门禁管理======\n");
    printf("1.输入密码\n");
    printf("2.刷卡进入\n");
    printf("3.指纹识别\n");
    printf("4.访客进入\n");
    printf("  是否返回主界面Y/N\n");
    return;
}

void printmain_view_c2(){
    printf("\n=====后台管理======\n");
    printf("1.增加员工信息\n");
    printf("2.浏览员工信息\n");
    printf("3.查询员工信息\n");
    printf("4.删除员工信息(暂不实现)\n");
    printf("  是否返回主界面Y/N\n");
    return;
}

void printmain_view_c3(){
    printf("\n=====帮助信息======\n");
    printf("1.系统使用方法\n");
    printf("2.版本升级\n");
    printf("3.版权所有\n");
    printf("4.联系我们\n");
    printf("  是否返回主界面Y/N\n");
    return;
}