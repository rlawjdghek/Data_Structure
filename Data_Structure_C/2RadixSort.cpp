//#include <stdio.h>
//#include "2ListBaseQueue.h"
//
//#define BUCKET_LEN 10
//
//void RadixSort(int arr[], int num, int maxlen) {
//	Queue BucketQueue[BUCKET_LEN];
//	int i,j;
//	int jaritsu;
//	int sip = 1;
//	int rotate;
//	int idx;
//	for (j = 0; j < BUCKET_LEN; j++) {
//		QueueInit(&BucketQueue[j]);
//	}
//	for (rotate = 0; rotate < maxlen; rotate++) {
//
//		
//		for (i = 0; i < num; i++) {
//			jaritsu = (arr[i] / sip) % 10;
//			Enqueue(&BucketQueue[jaritsu], arr[i]);
//
//		}
//
//		for (i = 0,idx = 0; i < BUCKET_LEN; i++) {
//			
//			while (!QIsEmpty(&BucketQueue[i])) {
//				arr[idx++] = Dequque(&BucketQueue[i]);
//			}
//		}
//
//		sip = sip * 10;
//	}
//}
//
//int main(void){
//	int arr[7] = {12,212,14,7141,10987,6,15};
//	int len = sizeof(arr) / sizeof(int);
//	RadixSort(arr, len, 5);
//
//	for (int i = 0; i < len; i++) {
//		printf("%d ", arr[i]);
//	}
//}