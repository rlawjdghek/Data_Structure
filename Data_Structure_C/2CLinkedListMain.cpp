//#include <stdio.h>
//#include "2CLinkedList.h"
//
//int main(void) {
//	List list;
//	LData data;
//	ListInit(&list);
//
//
//	LInsert(&list, 6);
//	LInsert(&list,77);
//	LInsert(&list, 5);
//	LInsert(&list, 4);
//	LInsertFront(&list, 1);
//	LInsertFront(&list, 2);
//	LInsertFront(&list, 83);
//
//	if (LFirst(&list, &data)) {
//		printf("%d  ", data);
//
//		for(int i =0; i< list.NumOfData-1;i++) {
//			LNext(&list, &data);
//			printf("%d  ", data);
//		}
//	}
//	if (LFirst(&list, &data)) {
//		if (data == 2) {
//			LRemove(&list);
//		}
//		for (int j = 0; j < list.NumOfData - 1; j++) {
//			LNext(&list, &data);
//			if (data == 2) {
//				LRemove(&list);
//			}
//		}
//	}
//
//	if (LFirst(&list, &data)) {
//		printf("%d  ", data);
//
//		for (int i = 0; i < list.NumOfData - 1; i++) {
//			LNext(&list, &data);
//			printf("%d  ", data);
//		}
//	}
//}