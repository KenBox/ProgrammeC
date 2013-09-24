//
//  main.c
//  Entrance_Guard_System
//
//  Created by shangde on 13-9-24.
//  Copyright (c) 2013年 Ken. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "main_view.h"
int main(int argc, const char * argv[])
{

    // insert code here...
    while (1) {
        //打印主界面
        printmain_view();
        printf("请选择操作\n");
        int select;
        scanf("%d",&select);
        fflush(stdin);
        if (select<0||select>4) {
            printf("操作错误，请重新选择操作\n\n\n");
            continue;
        }
        switch (select) {
            case 1:
                //进入门禁管理界面
                while (1) {
                    //打印门禁管理界面
                    printmain_view_c1();
                    
                    char c1_select;
                    c1_select = getchar();
                    if (c1_select=='Y'||c1_select=='y') {
                        break;
                    }else if (c1_select=='N'||c1_select=='n'){
                        continue;
                    }
                    switch (c1_select) {
                        case 1:
                            //请输入密码
                            break;
                        case 2:
                            //刷卡
                            break;
                        case 3:
                            //指纹
                            break;
                        case 4:
                            //访客进入
                            break;
                        default:
                            break;
                    }

                }
                break;
            case 2:
                //进入后台管理界面
                while (1) {
                 printmain_view_c2();
                    char c2_select;
                    c2_select = getchar();
                    if (c2_select=='Y'||c2_select=='y') {
                        break;
                    }else if (c2_select=='N'||c2_select=='n'){
                        continue;
                    }
                    switch (c2_select) {
                        case 1:
                            //增加员工信息
                            break;
                        case 2:
                            //浏览
                            break;
                        case 3:
                            //查询
                            break;
                        case 4:
                            //删除
                            break;
                        default:
                            break;
                    }
                }    
                break;
            case 3:
                //进入帮助信息界面
                while (1) {
                    printmain_view_c3();
                    char c3_select;
                    c3_select = getchar();
                    if (c3_select=='Y'||c3_select=='y') {
                        break;
                    }else if (c3_select=='N'||c3_select=='n'){
                        continue;
                    }
                    switch (c3_select) {
                        case 1:
                            //系统使用方法
                            break;
                        case 2:
                            //版本升级
                            break;
                        case 3:
                            //版权所有
                            break;
                        case 4:
                            //联系我们
                            break;
                        default:
                            break;
                    }
                }
                break;
            case 4:
                //退出程序
                exit(-1);
                break;
            default:
                break;
        }
    }
    
    return 0;
}

