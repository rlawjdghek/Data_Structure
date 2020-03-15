//#include <stdio.h>	
//
//typedef struct _empInfo {
//	int sabun;
//	int age;
//
//}EmpInfo;
//
//int GetHashValue(int input) {
//	return input % 100;
//}
//
//int main(void) {
//	EmpInfo emparr[100];
//	EmpInfo emp1 = { 20150057, 23 };
//	EmpInfo emp2 = { 20130029, 28 };
//	EmpInfo emp3 = { 20180099, 21 };
//
//	emparr[GetHashValue(emp1.sabun)] = emp1;
//	emparr[GetHashValue(emp2.sabun)] = emp2;
//	emparr[GetHashValue(emp3.sabun)] = emp3;
//
//	EmpInfo f1, f2, f3;
//	f1 = emparr[GetHashValue(20150057)];
//	printf("%d %d", f1.age, f1.sabun);
//
//
//}