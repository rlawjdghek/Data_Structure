//#include <stdio.h>
//#include <stdlib.h>
//#include "2DLinkedList.h"
//
//
//void ListInit(List* plist) {
//	plist->NumOfData = 0;
//	plist->head = (Node*)malloc(sizeof(Node));
//	plist->head->next = NULL;
//	plist->comp = NULL;
//}
//void FInsert(List* plist, LData data) {
//	Node* newnode = (Node*)malloc(sizeof(Node));
//	newnode->data = data;
//	newnode->next = plist->head->next;
//	plist->head = newnode;
//
//	(plist->NumOfData)++;
//}
//void SInsert(List* plist, LData data) {
//	Node* newnode = (Node*)malloc(sizeof(Node));
//	newnode->data = data;
//	Node* findpos = plist->head;
//	while (findpos->next != NULL && plist->comp(data, findpos->next->data) != 0) {
//		findpos = findpos->next;
//	}
//	newnode->next = findpos->next;
//	findpos->next = newnode;
//	(plist->NumOfData)++;
//
//
//
//}
//void LInsert(List* plist, LData pdata) {
//	if (plist->comp == NULL) {
//		FInsert(plist, pdata);
//	}
//	else {
//		SInsert(plist, pdata);
//	}
//}
//
//
//int LFirst(List* plist, LData* pdata) {
//	if (plist->head->next == NULL) {
//		return FALSE;
//	}
//	else {
//	
//
//		*pdata = plist->head->next->data;
//		plist->before = plist->head;
//		plist->cur = plist->head->next;
//		return TRUE;
//	}
//}
//int LNext(List* plist, LData* pdata) {
//	if (plist->cur->next == NULL) {
//		return FALSE;
//	}
//	else {
//		
//		plist->before = plist->cur;
//		plist->cur = plist->cur->next;
//		*pdata = plist->cur->data;
//		return TRUE;
//
//	}
//}
//
//LData LRemove(List* plist) {
//	Node* delnode = plist->cur;
//	LData rdata = plist->cur->data;
//
//	plist->before->next = plist->cur->next;
//	plist->cur = plist->before;
//	free(delnode);
//    (plist->NumOfData)--;
//	return rdata;
//
//}
//
//
//int LCount(List* plist) {
//	return plist->NumOfData;
//}
//
//void SetSortRule(List* plist, int(*comp)(LData data1, LData data2)) {
//	plist->comp = comp;
//}
//
