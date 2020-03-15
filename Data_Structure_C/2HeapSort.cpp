//#include <stdio.h>
//#include "2UsefulHeap.h"
//
//int AscendingOrder(int d1, int d2) {
//	return d2 - d1;
//}
//
//
//void HeapSort(int arr[], int n) {
//	Heap heap;
//	HeapInit(&heap, AscendingOrder);
//
//	for (int i = 0; i < n; i++) {
//		HInsert(&heap, arr[i]);
//	}
//	for (int j = 0; j < n; j++) {
//		arr[j] = HDelete(&heap);
//	}
//}
//
//int main(void) {
//	int arr[6] = { 5,7,3,5,7,8 };
//	int i;
//	HeapSort(arr, 6);
//	for (i = 0; i < 6; i++) {
//		printf("%d", arr[i]);
//	}
//}