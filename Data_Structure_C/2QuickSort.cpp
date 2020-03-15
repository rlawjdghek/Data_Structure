//#include <stdio.h>
//
//void swap(int arr[], int d1, int d2) {
//	int temp = arr[d1];
//	arr[d1] = arr[d2];
//	arr[d2] = temp;
//}
//
//int partition(int arr[], int left, int right) {
//	int low = left + 1, high = right;
//	int pivot = arr[left];
//
//	while (low <= high) {
//		while (arr[low] <= pivot && low <= right) {
//			low++;
//		}
//		while (arr[high] >= pivot && high > left) {
//			high--;
//		}
//
//		if (low <= high) {
//			swap(arr, low, high);
//		}
//	}
//	swap(arr, left, high);
//	return high;
//}
//
//void QuickSort(int arr[], int left, int right) {
//
//	if (left < right) {
//		int pivot = partition(arr, left, right);
//		QuickSort(arr, left, pivot - 1);
//		QuickSort(arr, pivot + 1, right);
//
//	}
//}
//
//int main(void) {
//	int arr[7] = { 4,7,6,5,8,5,3 };
//	QuickSort(arr, 0, 6);
//	for (int i = 0; i < 7; i++) {
//		printf("%d  ", arr[i]);
//	}
//}