//#include <stdio.h>
//#include <stdlib.h>
//#include "2ArrayBaseCircularQueue.h"
//
//void QueueInit(CQueue* q) {
//	q->front = 0;
//	q->rear = 0;
//}
//int QIsEmpty(CQueue* q) {
//	if (q->front == q->rear) {
//		return TRUE;
//	}
//	else {
//		return FALSE;
//	}
//}
//int NextPosIdx(int pos) {
//	if (pos == QUEUE_LEN - 1) {
//		return 0;
//	}
//	else {
//		return pos + 1;
//	}
//}
//void Enqueue(CQueue* q, Data data) {
//	if (NextPosIdx(q->rear) == q->front) {
//		printf("²Ë Ã¡½À´Ï´Ù");
//		exit(-1);
//	}
//	else {
//		q->rear = NextPosIdx(q->rear);
//		q->arr[q->rear] = data;
//	}
//}
//Data Dequeue(CQueue* q) {
//	if (q->front == q->rear) {
//		printf("ºñ¾î¼­ »ÌÀ»°Ô ¾ø´Ù");
//		exit(-1);
//	}
//	
//	q->front = NextPosIdx(q->front);
//	return q->arr[q->front];
//}
//Data QPeek(CQueue* q) {
//	if (q->front == q->rear) {
//		printf("ºñ¾î¼­ »ÌÀ»°Ô ¾ø´Ù");
//		exit(-1);
//	}
//	return q->arr[NextPosIdx(q->front)];
//}