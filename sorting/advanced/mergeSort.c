#include "mergeSort.h"
/* Merge sort is a divide and conquer sorting algorithm. It divides the unsorted
 * array into two halves, sorts them and then merges them. This process is
 * applied recursively
 */

// Helper function
/* Merges two independently sorted subarrays of arr[]
 * The first subarray is arr[l .. m]
 * The second subarray is arr[m+1 .. r]
 * Creates automatic arrays for each of these subarrays and then iteratively
 * chooses the smallest element from each to add to the argument array.
 */
static void merge(int arr[], int l, int m, int r)
{
	// Error checking
	if (l <= m && m <= r)
		;
	else
		printf(
		"Program Error! Indices are not in order. Function is not well written\n"
		);


	// n1 and n2 are the size of the respective subarrays
	int n1 = m - l + 1;
	int n2 = r - m;

	// Create temporary arrays
	int L[n1], R[n2];

	// Copy the keys to the temporary arrays
	int i;
	for (i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (i = 0; i < n2; i++)
		R[i] = arr[m + 1 + i];

	// Merge the temporary arrays into arr[l .. r]
	// Iterators to keep track of where we are in the automatic arrays
	int j = 0, k = 0;
	// Iterator for the argument array
	i = l;
	while (j < n1 && k < n2)
	{
		if (L[j] <= R[k])
		{
			arr[i] = L[j];
			j++;
		}
		else {
			arr[i] = R[k];
			k++;
		}
		i++;
	}

	// We've used the entirety of either array L or R
	// If array L is finished
	if (j == n1)
		while (k < n2)
			arr[i++] = R[k++];
	// if array R is finished
	else
		while (j < n1)
			arr[i++] = L[j++];
}


// mergeSort function
/* Sorts the array from index l .. r
 */
void mergeSort(int arr[], int l, int r)
{
	// Error checking
	if (r < l)
	{
		printf("User Error!Indices given are not in order\n");
		return;
	}
	// Size of subarray = index2 - index1 + 1; will be odd if
	// subtraction is even and will be even if subtraction is odd
	
	// if the size of the subarray is an odd number the middle index
	// will indeed be the middle, mergeSort won't halve perfectly

	// if the size is an even number the middle index will be left
	// of the middle

	// middle index of the unsorted subarray
	int m = l + (r - l) / 2;

	mergeSort(arr, l, m);
	mergeSort(arr, m + 1, r);

	merge(arr, l, m, r);
	return;

}
