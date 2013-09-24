//
//  main_view.h
//  Entrance_Guard_System
//
//  Created by shangde on 13-9-24.
//  Copyright (c) 2013年 Ken. All rights reserved.
//


#ifndef Entrance_Guard_System_for_VisualStudio_Admin_h
#define Entrance_Guard_System_for_VisualStudio_Admin_h
#include "Struct.h"

//初始化管理员账号
StaffInfo* InitStaffInfo();
//增加员工信息
StaffInfo* InsertStaffInfo(StaffInfo *_p);
//浏览
void ShowStaffInfo(StaffInfo *_p);
//查询
void FindStaffInfo(StaffInfo *_p,char* _name);
//删除
StaffInfo* DelStaffInfo(StaffInfo *_p);
#endif
