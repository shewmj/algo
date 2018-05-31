#include "Sort.h"



namespace Sort
{
	
	void SelectionSort(int arr[], int n) {
		
		for (int index = 0; index < n - 1; index++) {
			int min_index = index;
			int iter = index + 1;
			while (iter < n) {
				if (arr[iter] < arr[min_index]) {
					min_index = iter;
				}
				iter++;
			}
			if (min_index != index) {
				int temp = arr[min_index];
				arr[min_index] = arr[index];
				arr[index] = temp;
			}
		}
			
		
	}

	

	void BubbleSort(int arr[], int n) {


		for (int i = 0; i < n - 1; i++) {
			bool swapped = false;
			for (int j = 0; j < n - 1 - i; j++) {
				if (arr[j + 1] < arr[j]) {
					int temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
					swapped = true;
				}
			}

			if (swapped == false) {
				return;
			}
		}
	}


}