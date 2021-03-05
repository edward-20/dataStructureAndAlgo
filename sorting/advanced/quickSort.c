/* Divide and conquer algorithm. It picks an element as a pivot then partitions
 * the array around the pivot. The partition to the left consists of keys less
 * than the pivot and the right partition consists of keys greater than. The
 * function is recursively applied.
 */

void quickSort(int arr[], int l, int r)
{
	// Error handling
	if (l > r)
		printf("User Error! Indices are in the wrong order.\n");

	// The middle key is selected as pivot and thus moved to the left
	// even array size: middle key is left of middle
	// odd array size: middle key is middle
	swap(arr, l, l + (r - l) / 2);

	// keeps track of where the end of the left partition is
	int last = l;

	// iterating through array excluding the pivot key at the start
	for (i = l + 1; i <= r; i++)
		// if we find a key smaller than the pivot, we add it to the
		// left partition
		if (arr[i] < arr[l])
			swap(arr, ++last, i)
	// Finally we swap the pivot key with the last key of the left partition
	swap(arr, l, last);

	// Recursion
	quickSort(arr, l, last - 1);
	quickSort(arr, last + 1, r);
	return;
}
