
#ifndef Entrance_Guard_System_Struct_h
#define Entrance_Guard_System_Struct_h

typedef struct StaffInfo{
	char* name;
	int password;
	StaffInfo* next;
}StaffInfo;
StaffInfo* head;//ͷָ��
StaffInfo* p;//����ָ��

#endif