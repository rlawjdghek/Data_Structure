//#include <stdio.h>
//#include "2DLinkedList.h"
//
//int WhoIsPrecede(int data1, int data2) {
//	if (data1 < data2) {
//		return 0; //while문에 넣엇을때를 생각하자
//	}
//	else {
//		return 1;
//	}
//}
//
//int main(void) {
//	List list;
//	int data;
//	ListInit(&list);
//
//	SetSortRule(&list, WhoIsPrecede);
//
//	LInsert(&list, 1);
//	LInsert(&list, 2);
//	LInsert(&list, 3);
//	LInsert(&list, 4);
//	LInsert(&list, 2);
//	LInsert(&list, 5);
//	LInsert(&list, 6);
//	LInsert(&list, 2);
//
//	if (LFirst(&list, &data)) {
//		printf("%d ", data);
//		while (LNext(&list, &data)) {
//			printf("%d ", data);
//		}
//	}
//
//	if (LFirst(&list, &data)) {
//		if (data == 2) {
//			LRemove(&list);
//
//		}
//		while (LNext(&list, &data)) {
//			if (data == 2){
//				LRemove(&list);
//			}
//		}
//	}
//
//	if (LFirst(&list, &data)) {
//		printf("%d ", data);
//		while (LNext(&list, &data)) {
//			printf("%d ", data);
//		}
//	}
//    
//}