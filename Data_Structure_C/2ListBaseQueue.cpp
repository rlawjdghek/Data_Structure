//#include <stdio.h>
//#include <stdlib.h>
//#include "2ListBaseQueue.h"
//
//
//
//
//void QueueInit(LQueue* q) {
//	q->front = NULL;
//	q->rear = NULL;
//}
//int QIsEmpty(LQueue* q) {
//	if (q->front == NULL) {
//		return TRUE;
//	}     
//	return FALSE;
//}
//
//void Enqueue(LQueue* q, Data data) {
//	QNode* newnode = (QNode*)malloc(sizeof(QNode));
//	newnode->data = data;
//	newnode->next = NULL;
//	if (QIsEmpty(q)) {
//		q->front = newnode;
//		q->rear = newnode;
//	}
//	else {
//		q->rear->next = newnode;
//		q->rear = newnode;
//	}
//}
//Data Dequque(LQueue* q) {
//	QNode* delnode;
//	Data rdata;
//	if (QIsEmpty(q)) {
//		printf("비었음");
//		exit(-1);
//	}
//	
//	delnode = q->front;
//	q->front = q->front->next;
//	rdata = delnode->data;
//
//	free(delnode);
//	return rdata;
//}
//Data QPeek(LQueue* q) {
//	if (QIsEmpty(q)) {
//		printf("비었음");
//		exit(-1);
//	}
//	return q->front->data;
//}
//
