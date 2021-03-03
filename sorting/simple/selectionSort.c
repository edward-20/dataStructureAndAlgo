/* Selection Sort is a simple sorting algorithm. It repeatedly takes the minimum
 * element from the unsorted subarray to append to the sorted subarray.
 */
#include <stdio.h>

void selectionSort(arr[], int l, int r)
{
	// Iterator
	int i;
	// After each iteration, we have added one to the sorted array
	for (i = l; i <= r; i++) {
		// Find the minimum key in arr[i .. r] and use its index to swap
		// with arr[i]
		int minimum_index = i;

		// Iterate through the unsorted array
		int j;
		for (j = i + 1; j <= r; j++) {
			// if we find a new minimum
			if (arr[j] < arr[minimum_index]) {
				// save its index
				minimum_index = j;
			}
		}
		// Swap the minimum with arr[i] to add to the sorted array
		// whilst conserving the elements of the unsorted array
		int buffer = arr[minimum_index];
		arr[minimum_index] = arr[i];
		arr[i] = buffer;
	}

	return;
}
