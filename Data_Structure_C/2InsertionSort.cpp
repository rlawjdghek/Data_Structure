//#include <stdio.h>
//
//void InsertionSort(int arr[], int n) {
//	int i, j;
//	int data;
//	for (i = 1; i < n; i++) {
//		data = arr[i];
//		for (j = i - 1; j >= 0; j--) {
//			if (data < arr[j]) {
//				arr[j + 1] = arr[j];
//				if (j == 0) {
//					arr[0] = data;
//				}
//			}
//			else {
//				arr[j + 1] = data;
//				break;
//			}
//		}
//	}
//}
//
//int main(void) {
//	int arr[5] = { 5,4,6,32,2 };
//	InsertionSort(arr, 5);
//
//	for (int i = 0; i < 5; i++) {
//		printf("%d", arr[i]);
//	}
//}