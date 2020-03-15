//#include <stdio.h>
//
//void BubbleSort(int arr[], int len) {
//	int i, j, temp;
//
//
//	for (i = 0; i < len-1; i++) {
//		for (j = 0; j < len-i-1; j++) {
//			if (arr[j] > arr[j + 1]) {
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//
//int main(void) {
//	int arr[10] = { 4,5,6,7,3,6,5,4,7,4 };
//	BubbleSort(arr, 10);
//	for (int i = 0; i < 10; i++) {
//		printf("%d", arr[i]);
//	}
//}