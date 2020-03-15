//#include <stdio.h>
//#include <stdlib.h>
//#include "2Table.h"
//
//int HashFunction(int input) {
//	return input % 100;
//}
//
//int main(void) {
//	Person* newperson;
//	Table table;
//	TableInit(&table, HashFunction);
//	newperson = MakePersonData(20120003, "LEE", "Seoul");
//	TInsert(&table, GetSSN(newperson), newperson);
//	newperson = MakePersonData(20130012, "KIM", "Jeju");
//	TInsert(&table, GetSSN(newperson), newperson);
//	newperson = MakePersonData(20170049, "HAN", "Kangwon");
//	TInsert(&table, GetSSN(newperson), newperson);
//
//	Person* sp = TSearch(&table, 20170049);
//	ShowPersonInfo(sp);
//	
//
//}