//
//  main.c
//  Entrance_Guard_System
//
//  Created by shangde on 13-9-24.
//  Copyright (c) 2013�� Ken. All rights reserved.
//
#include "StdAfx.h"
#include "stdlib.h"

#include "main_view.h"
#include "Admin.h"
#include "Struct.h"

int main(int argc, const char * argv[])
{
	//���ݳ�ʼ��
	StaffInfo* head=InitStaffInfo();
	//InitStaffInfo();
    while (1) {
        //��ӡ������
        printmain_view();
        printf("��ѡ�����\n");
        int select;
        scanf_s("%d",&select);
        fflush(stdin);
        if (select<0||select>4) {
            printf("��������������ѡ�����\n\n\n");
            continue;
        }
        switch (select) {
            case 1:
                //�����Ž��������
                while (1) {
                    //��ӡ�Ž��������
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
                            //����������
                            break;
                        case 2:
                            //ˢ��
                            break;
                        case 3:
                            //ָ��
                            break;
                        case 4:
                            //�ÿͽ���
                            break;
                        default:
                            break;
                    }

                }
                break;
            case 2:
                //�����̨�������

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
                            //����Ա����Ϣ

                            break;
                        case 2:
                            //���
                            break;
                        case 3:
                            //��ѯ
                            break;
                        case 4:
                            //ɾ��
                            break;
                        default:
                            break;
                    }
                }    
                break;
            case 3:
                //���������Ϣ����
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
                            //ϵͳʹ�÷���
                            break;
                        case 2:
                            //�汾����
                            break;
                        case 3:
                            //��Ȩ����
                            break;
                        case 4:
                            //��ϵ����
                            break;
                        default:
                            break;
                    }
                }
                break;
            case 4:
                //�˳�����
                exit(-1);
                break;
            default:
                break;
        }
    }
    
    return 0;
}

