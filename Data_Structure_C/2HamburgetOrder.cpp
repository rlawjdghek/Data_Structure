//#include <stdio.h>
//#include <stdlib.h>
//#include "2ArrayBaseCircularQueue.h"
//#include <time.h>
//
//#define CUSTOMER 15
//#define CHEESETIME 12
//#define BULGOGITIME 15
//#define DUBBLETIME 21
//
//#define CHEESECHOICE 0
//#define BULGOGICHOICE 1
//#define DUBBLECHOICE 2
//
//int main(void) {
//	CQueue q;
//	QueueInit(&q);
//	int lunchtime;
//	int numCheese = 0, numBulgogi = 0, numDubble = 0;
//	int stackmaketime = 0;
//	srand(time(NULL));
//	for (lunchtime = 0; lunchtime < 3600; lunchtime++) {
//		if (lunchtime % 15 == 0) {
//			if (rand() % 3 == CHEESECHOICE) {
//				Enqueue(&q, CHEESETIME);
//				numCheese++;
//			}
//			else if (rand() % 3 == BULGOGICHOICE) {
//				Enqueue(&q, BULGOGITIME);
//				numBulgogi++;
//			}
//			else {
//				Enqueue(&q, DUBBLETIME);
//				numDubble++;
//			}
//		}
//		if (!QIsEmpty(&q) && stackmaketime <= 0) {
//			stackmaketime = Dequeue(&q);
//		}
//		stackmaketime--;
//	}
//	printf("치즈버거 : %d", numCheese);
//	printf("불고기버거 : %d", numBulgogi);
//	printf("더블버거 : %d", numDubble);
//
//
//
//}