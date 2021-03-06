#include "bubbleSort.h"
/* Simple sorting algorithm. Iterates through the array multiple times. Each
 * time if it finds a key that is greater than its preceding key, it will swap
 * them, thereby "bubbling" the higher results to where they belong in the
 * ordered array.
 */
void bubbleSort(int arr[], int l, int r)
{
	// Iterator
	int i;
	// Each iteration equates to a "pass", that ultimately "bubbles" the
	// largest key to the end of the array
	for (i = l; i <= r; i++) {

		// Check to see in the pass if the array is already sorted
		bool sorted = true;
		// Iterate through the supposedly unsorted subarray:
		// arr[l .. r - i]
		int j;
		for (j = l; j <= r - i; j++) {
			if (arr[j] < arr[j + 1]) {
				// swap the keys
				swap(arr, j, j + 1);	
				sorted = false;
			}
		}
		
		// If the array is sorted we needn't continue the function
		if (sorted)
			return;
	}
	return;
}
