#include "Search.h"


namespace Search
{

	int BinarySearch(int arr[], int len, int val) {
		int front = 0;
		int back = len - 1;
		int mid;
		while (front <= back) {
			mid = (front + back) / 2;
			if (val == arr[mid]) {
				return mid;
			}
			if (val < arr[mid]) {
				back = mid - 1;
			}
			if (val > arr[mid]) {
				front = mid + 1;
			}
		}
		return -1;

	}

}