//#include <stdio.h>
//#include <stdlib.h>
//#include "2DBLinkedList.h"
//
//
//
//void ListInit(List* plist) {
//	plist->head = (Node*)malloc(sizeof(Node*));
//	plist->tail = (Node*)malloc(sizeof(Node*));
//	plist->head->prev = NULL;
//	plist->head->next = plist->tail;
//	plist->tail->next = NULL;
//	plist->tail->prev = plist->head;
//	plist->NumOfData = 0;
//}
//void LInsert(List* plist, LData data) {
//	Node* newnode = (Node*)malloc(sizeof(Node));
//	newnode->data = data;
//	plist->tail->prev->next = newnode;
//	newnode->prev = plist->tail->prev;
//	newnode->next = plist->tail;
//	plist->tail->prev = newnode;
//	(plist->NumOfData)++;
//}
//
//int LFirst(List* plist, LData* data) {
//	if (plist->head->next == plist->tail) {
//		return FALSE;
//	}
//	else {
//		plist->cur = plist->head->next;
//		*data = plist->cur->data;
//		return TRUE;
//	}
//}
//int LNext(List* plist, LData* data) {
//	if (plist->cur->next == plist->tail) {
//		return FALSE;
//	}
//	else {
//		plist->cur = plist->cur->next;
//		*data = plist->cur->data;
//		return TRUE;
//	}
//}
//
//int LPrevious(List* plist, LData* data) {
//	if (plist->cur->prev == plist->head) {
//		return FALSE;
//	}
//	else {
//		plist->cur = plist->cur->prev;
//		*data = plist->cur->data;
//		return TRUE;
//	}
//}
//LData LRemove(List* plist) {
//	Node* delnode = plist->cur;
//	LData rdata = delnode->data;
//
//	plist->cur->prev->next = plist->cur->next;
//	plist->cur->next->prev = plist->cur->prev;
//	plist->cur = plist->cur->prev;
//	free(delnode);
//	(plist->NumOfData)--;
//	return rdata;
//
//}
//
//int LCount(List* plist) {
//	return plist->NumOfData;
//}
