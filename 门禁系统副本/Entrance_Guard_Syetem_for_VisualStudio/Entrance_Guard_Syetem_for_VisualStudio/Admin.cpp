//Admin �������ʵ���ļ�


#include "stdafx.h"
#include "stdlib.h"
//#ifndef Entrance_Guard_System_for_VisualStudio_Admin_h
//#define Entrance_Guard_System_for_VisualStudio_Admin_h
#include "Struct.h"
//#endif

//�����㷨
int CreatPwd(char* _name){
	int pwd=((*_name)%10+(*_name+1)%10+(*_name+2)%10)*321;
	return pwd;
}
//��ʼ������Ա�˺�
StaffInfo* InitStaffInfo(StaffInfo* _head){
	_head=(StaffInfo*)malloc(sizeof(StaffInfo));
	if(_head==NULL){
		printf("�ڴ����ʧ�ܣ��˳�����\n");
		exit(-1);
	}
	_head->name="Admin";
	_head->password=1234;
	_head->next=NULL;
	return _head;
}

//����Ա����Ϣ
StaffInfo* InsertStaffInfo(StaffInfo *_p){
	_p=(StaffInfo*)malloc(sizeof(StaffInfo));
	fgets(_p->name,20,stdin);
	_p->password=CreatPwd(_p->name);
	_p->next=head;
	return _p;
}
//���
void ShowStaffInfo(StaffInfo *_p){
	int nCount=0;
	while(_p!=NULL){
		printf("name = %s\n password = %d\n",_p->name,_p->password);
		_p=_p->next;
		nCount++;
	}
	printf("ϵͳ�ڹ���%d��Ա����Ϣ\n",nCount);
	return;
}
//��ѯ
void FindStaffInfo(StaffInfo *_p,char* _name){
	while(_name!=_p->name){
		_p=_p->next;
		if(_p==NULL){
			printf("û��ƥ������\n");
			return;
		}
	}
	printf("��ѯ�ɹ�\nname = %s\npassword = %d",_p->name,_p->password);
	return;
}
//ɾ��
StaffInfo* DelStaffInfo(StaffInfo *_p);