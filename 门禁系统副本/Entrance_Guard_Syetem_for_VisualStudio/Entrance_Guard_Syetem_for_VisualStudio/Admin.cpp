//Admin 管理界面实现文件


#include "stdafx.h"
#include "stdlib.h"
//#ifndef Entrance_Guard_System_for_VisualStudio_Admin_h
//#define Entrance_Guard_System_for_VisualStudio_Admin_h
#include "Struct.h"
//#endif

//加密算法
int CreatPwd(char* _name){
	int pwd=((*_name)%10+(*_name+1)%10+(*_name+2)%10)*321;
	return pwd;
}
//初始化管理员账号
StaffInfo* InitStaffInfo(StaffInfo* _head){
	_head=(StaffInfo*)malloc(sizeof(StaffInfo));
	if(_head==NULL){
		printf("内存分配失败，退出程序\n");
		exit(-1);
	}
	_head->name="Admin";
	_head->password=1234;
	_head->next=NULL;
	return _head;
}

//增加员工信息
StaffInfo* InsertStaffInfo(StaffInfo *_p){
	_p=(StaffInfo*)malloc(sizeof(StaffInfo));
	fgets(_p->name,20,stdin);
	_p->password=CreatPwd(_p->name);
	_p->next=head;
	return _p;
}
//浏览
void ShowStaffInfo(StaffInfo *_p){
	int nCount=0;
	while(_p!=NULL){
		printf("name = %s\n password = %d\n",_p->name,_p->password);
		_p=_p->next;
		nCount++;
	}
	printf("系统内共有%d个员工信息\n",nCount);
	return;
}
//查询
void FindStaffInfo(StaffInfo *_p,char* _name){
	while(_name!=_p->name){
		_p=_p->next;
		if(_p==NULL){
			printf("没有匹配数据\n");
			return;
		}
	}
	printf("查询成功\nname = %s\npassword = %d",_p->name,_p->password);
	return;
}
//删除
StaffInfo* DelStaffInfo(StaffInfo *_p);