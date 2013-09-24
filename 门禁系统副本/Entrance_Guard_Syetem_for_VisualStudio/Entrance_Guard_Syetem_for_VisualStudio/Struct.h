
#ifndef Entrance_Guard_System_Struct_h
#define Entrance_Guard_System_Struct_h

typedef struct StaffInfo{
	char* name;
	int password;
	StaffInfo* next;
}StaffInfo;
StaffInfo* head;//头指针
StaffInfo* p;//工作指针

#endif