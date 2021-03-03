/* Insertion Sort is a simple sorting algorithm. It iterates through the array,
 * until it finds a key less than its predecessor, in which case it will
 * "insert" it into the thus far sorted array.
 */
#include <stdio.h>

void insertionSort(int arr[], int l, int r)
{
	// iterator through the array
	int i;
	for (i = l + 1; i <= r; i++) {

		// if the key is less than its predecessor it must be inserted
		if (arr[i] < arr[i - 1]) {

			// Save the key in question to an automatic variable
			int key = arr[i];

			// Reverse iterator used to shift all keys higher than
			// the key in question to the next index in order to
			// make a spot for it
			int j = i - 1;
			while (j >= l && arr[j] > key) {
				arr[j + 1] = arr[j];
				j--;
			}
		// insert the key into its spot
		arr[j + 1] = key;
		}
	}

	return;
	
}


