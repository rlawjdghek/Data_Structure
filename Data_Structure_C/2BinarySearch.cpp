//#include <stdio.h>
//
//
//int BSearch(int arr[], int len, int target) {
//	int first = 0;
//	int last = len - 1;
//	int mid;
//
//	while (first <= last) {
//		mid = (first + last) / 2;
//		if (arr[mid] < target) {
//			first = mid + 1;
//		}
//		else if (arr[mid] > target) {
//			last = mid - 1;
//		}
//		else {
//			return mid;
//		}
//
//	}
//	return -1;
//}
//
//int main(void) {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11 };
//
//	int idx = BSearch(arr, 11, 4);
//	printf("%d", idx);
//}