//#include <stdio.h>
//#include <stdlib.h>
//#include "2NameCardp99.h"
//#include "2ArrayListp99.h"
//
//int main(void) {
//	List list;
//	NameCard* namecard;
//	ListInit(&list);
//
//	namecard = MakeNameCard("이진수", "010-1111-2222");
//	LInsert(&list, namecard);
//
//	namecard = MakeNameCard("김진수", "010-1111-3333");
//	LInsert(&list, namecard);
//
//	namecard = MakeNameCard("박진수", "010-1111-4444");
//	LInsert(&list, namecard);
//
//	if (LFirst(&list, &namecard)) {
//		if (NameCompare(namecard, "김진수")) {
//			ShowNameCardInfo(namecard);
//		}
//		while (LNext(&list, &namecard)) {
//			if (NameCompare(namecard, "김진수")) {
//				ShowNameCardInfo(namecard);
//			}
//		}
//	}
//
//}