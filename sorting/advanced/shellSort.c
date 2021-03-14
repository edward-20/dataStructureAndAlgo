#include "shellSort.h"
/* An in-place comparison sort. It can be seen as a generalisation of sorting by
 * exchange (bubble sort) or sorting by insertion (insertion sort). If viewed as
 * an optimisation of insertion sort, the sort works by ensuring that taking
 * every "h"th key in the array produces a sorted array, that is the array
 * becomes "h" number of interleaved sorted lists. Beginning with large values
 * of "h" allows keys to move long distances in the original list, reducing
 * large amounts of disorder quickly. This leaves less work for smaller
 * "h"-sort.
 * 
 * The question of which gap sequence to use greatly affects the algorithm.
 */

void shellSort(int arr[], int n)
{
	int gap, i, j;
	// gap iterates through (n / 2^(iteration))
	for (gap = n / 2; gap > 0; gap /= 2)
		// Do a gapped insertion sort for this gap size
		// The first elements of the interleaved lists are seen in arr[0
		// .. gap - 1]. So we start with i = gap and proceed to the end
		for (i = gap; i < n; i++)
			// j iterates from i back through its respective list
			for (j = i - gap; j >= 0 && arr[j] > arr[j + gap]; j -= gap)
				//printf("Innermost loop\n");
				swap(arr, j, j + gap);
				printArray(arr, n);
}
