//#include <stdio.h>
//#include <stdlib.h>
//
//void MergeTwoArea(int arr[], int left, int mid, int right) {
//	int* sortarr = (int*)malloc(sizeof(int)*(right + 1));
//	int lidx = left, ridx = mid+1, idx = left;
//	while (lidx <= mid && ridx <=right) {
//		if (arr[lidx] > arr[ridx]) {
//			sortarr[idx++] = arr[ridx++];
//		}
//		else {
//			sortarr[idx++] = arr[lidx++];
//		}
//	}
//
//	while (ridx <= right) {
//		sortarr[idx++] = arr[ridx++];
//	}
//
//	while (lidx <= mid) {
//		sortarr[idx++] = arr[lidx++];
//	}
//
//
//	for (int i = left; i < right+1; i++) {
//		arr[i] = sortarr[i];
//	}
//	free(sortarr);
//}
//
//void Mergesort(int arr[], int left, int right) {
//	if (left < right) {
//		int mid = (left + right) / 2;
//
//		Mergesort(arr, left, mid);
//		Mergesort(arr, mid + 1, right);
//
//		MergeTwoArea(arr, left, mid, right);
//	}
//}3
//
//int main(void) {
//	int arr[10] = { 5, 7, 0, 3, 4, 7, 65, 4, 1, 2 };
//
//	Mergesort(arr, 0, 9);
//	for (int i = 0; i < 10; i++) {
//		printf("%d	", arr[i]);
//	}
//}