//#include <stdio.h>
//
//void SelectionSort(int arr[], int n) {
//	int i, j;
//	int temp, minidx;
//	for (i = 0; i < n-1; i++) {
//		minidx = i;
//		for (j = i; j < n; j++) {
//			if (arr[minidx] > arr[j]) {
//				minidx = j;
//			}
//		}
//		temp = arr[minidx];
//		arr[minidx] = arr[i];
//		arr[i] = temp;
//	}
//}
//
//
//int main(void) {
//	int arr[5] = { 5,3,7,90,1 };
//	SelectionSort(arr, 5);
//	for (int i = 0; i < 5; i++) {
//		printf("%d	", arr[i]);
//	}
//}