//
//  main_view.h
//  Entrance_Guard_System
//
//  Created by shangde on 13-9-24.
//  Copyright (c) 2013�� Ken. All rights reserved.
//


#ifndef Entrance_Guard_System_for_VisualStudio_Admin_h
#define Entrance_Guard_System_for_VisualStudio_Admin_h
#include "Struct.h"

//��ʼ������Ա�˺�
StaffInfo* InitStaffInfo();
//����Ա����Ϣ
StaffInfo* InsertStaffInfo(StaffInfo *_p);
//���
void ShowStaffInfo(StaffInfo *_p);
//��ѯ
void FindStaffInfo(StaffInfo *_p,char* _name);
//ɾ��
StaffInfo* DelStaffInfo(StaffInfo *_p);
#endif
