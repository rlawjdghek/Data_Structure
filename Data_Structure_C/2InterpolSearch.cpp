//#include <stdio.h>
//
//
//int ISearch(int arr[], int first, int last, int target) {
//	int mid = (double)((target - arr[first]) / (arr[last] - arr[first])) * (last - first) + first;
//
//	while (first<last) {
//		if (target < arr[mid]) {
//			return ISearch(arr, first, mid - 1, target);
//		}
//		else if (target > arr[mid]) {
//			return ISearch(arr, mid + 1, last, target);
//		}
//		else {
//			return mid;
//		}
//	}
//}
//
//int main(void) {
//	int arr[] = { 1,2,3,4,7,8,9 };
//
//	int idx = ISearch(arr, 0, 6, 7);
//	printf("%d", idx);
//}