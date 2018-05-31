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

	/*

	void SelectionSort(int arr[], int n)
	{
		//pos_min is short for position of min
		int pos_min, temp;

		for (int i = 0; i < n - 1; i++)
		{
			pos_min = i;//set pos_min to the current index of array

			for (int j = i + 1; j < n; j++)
			{

				if (arr[j] < arr[pos_min])
					pos_min = j;
				//pos_min will keep track of the index that min is in, this is needed when a swap happens
			}

			//if pos_min no longer equals i than a smaller value must have been found, so a swap must occur
			if (pos_min != i)
			{
				temp = arr[i];
				arr[i] = arr[pos_min];
				arr[pos_min] = temp;
			}
		}
	}*/





}