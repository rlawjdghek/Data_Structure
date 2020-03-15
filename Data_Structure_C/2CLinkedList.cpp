//#include <stdio.h>
//#include <stdlib.h>
//#include "2CLinkedList.h"
//
//
//void ListInit(List* plist) {
//	plist->before = NULL;
//	plist->cur = NULL;
//	plist->tail = NULL;
//	plist->NumOfData = 0;
//}
//void LInsert(List* plist, LData data) {
//	Node* newnode = (Node*)malloc(sizeof(Node));
//	newnode->data = data;
//	if (plist->NumOfData == 0) {
//		plist->tail = newnode;
//		newnode->next = newnode;
//	}
//	else {
//		newnode->next = plist->tail->next;
//		plist->tail->next = newnode;
//		plist->tail = newnode;
//	}
//	(plist->NumOfData)++;
//}
//void LInsertFront(List* plist, LData data) {
//	Node* newnode = (Node*)malloc(sizeof(Node));
//	newnode->data = data;
//	if (plist->NumOfData == 0) {
//		plist->tail = newnode;
//		newnode->next = newnode;
//	}
//	else {
//		newnode->next = plist->tail->next;
//		plist->tail->next = newnode;
//
//	}
//	(plist->NumOfData)++;
//}
//
//int LFirst(List* plist, LData* data) {
//	if (plist->NumOfData == 0) {
//		return FALSE;
//	}
//	else {
//		plist->before = plist->tail;
//		plist->cur = plist->tail->next;
//		*data = plist->cur->data;
//		return TRUE;
//	}
//}
//int LNext(List* plist, LData* data) {
//	if (plist->NumOfData == 0) {
//		return FALSE;
//	}
//	plist->before = plist->cur;
//	plist->cur = plist->cur->next;
//	*data = plist->cur->data;
//	return TRUE;
//
//}
//LData LRemove(List* plist) {
//	Node* delnode = plist->cur;
//	LData rdata = delnode->data;
//	if (plist->cur == plist->cur->next){
//		plist->tail = NULL;
//	}
//	else {
//		if (delnode == plist->tail) {
//			plist->before->next = plist->cur->next;
//			plist->cur = plist->before;
//			plist->tail = plist->before;
//			free(delnode);
//		}
//		else {
//			plist->before->next = plist->cur->next;
//			plist->cur = plist->before;
//			free(delnode);
//		}
//	}
//	(plist->NumOfData)--;
//	return rdata;
//
//}
//int LCount(List* plist) {
//	return plist->NumOfData;
//}