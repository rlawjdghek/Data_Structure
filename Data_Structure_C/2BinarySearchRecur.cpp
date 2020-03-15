//#include <stdio.h>
//
//int BSearchRecur(int arr[], int first, int last, int target) {
//	int mid;
//	if (first > last) {
//		return -1;
//	}
//
//	while (first <= last) {
//		mid = (first + last) / 2;
//		if (arr[mid] == target) {
//			return mid;
//		}
//		else if (arr[mid] > target) {
//			return BSearchRecur(arr, first, mid - 1, target);
//		}
//		else {
//			return BSearchRecur(arr, mid + 1, last, target);
//		}
//	}
//}
//
//
//int main(void) {
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int idx = BSearchRecur(arr, 0, sizeof(arr) / sizeof(int), 6);
//	printf("%d", idx);
//}