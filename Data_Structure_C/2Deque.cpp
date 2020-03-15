//#include <stdio.h>
//#include "2Deque.h"
//#include <stdlib.h>
//
//
//void DequeInit(Deque* dq) {
//	dq->head = NULL;
//	dq->tail = NULL;
//
//}
//int DQIsEmpty(Deque* dq) {
//	if (dq->head == NULL) {
//		return TRUE;
//	}
//	else {
//		return FALSE;
//	}
//}
//
//void DQAddFirst(Deque* dq, Data data) {
//	Node* newnode = (Node*)malloc(sizeof(Node));
//	newnode->data = data;
//	newnode->next = dq->head;
//	if (DQIsEmpty(dq)) {
//		dq->tail = newnode;
//	}
//	else {
//		dq->head->prev = newnode;
//	}
//
//	newnode->prev = NULL;
//	dq->head = newnode;
//}
//void DQADDLast(Deque* dq, Data data) {
//	Node* newnode = (Node*)malloc(sizeof(Node));
//	newnode->data = data;
//	newnode->next = dq->tail;
//
//	if (DQIsEmpty(dq)) {
//		dq->head = newnode;
//	}
//	else {
//		dq->tail->next = newnode;
//	}
//	newnode->next = NULL;
//	dq->tail = newnode;
//
//}
//
//Data DQRemoveFirst(Deque* dq) {
//	if (DQIsEmpty(dq)) {
//		printf("비어있음");
//		exit(-1);
//	}
//	Node* delnode = dq->head;
//	Data rdata = delnode->data;
//	dq->head = dq->head->next;
//	free(delnode);
//	if (dq->head == NULL) {
//		dq->tail = NULL;
//	}
//	else {
//		dq->head->prev = NULL;
//	}
//
//
//	return rdata;
//}
//Data DQRemoveLast(Deque* dq) {
//	if (DQIsEmpty(dq)) {
//		printf("비어있음");
//		exit(-1);
//	}
//	Node* delnode = dq->tail;
//	Data rdata = delnode->data;
//	dq->tail = dq->tail->prev;
//	free(delnode);
//	if (dq->tail == NULL) {
//		dq->head = NULL;
//	}
//	else {
//		dq->tail->next = NULL;
//	}
//	return rdata;
//}
//
//Data DQGetFirst(Deque* dq) {
//	if (DQIsEmpty(dq)) {
//		printf("비어있음");
//		exit(-1);
//	}
//	return dq->head->data;
//}
//Data DQGetLast(Deque* dq) {
//	if (DQIsEmpty(dq)) {
//		printf("비어있음");
//		exit(-1);
//	}
//	return dq->tail->data;
//}
