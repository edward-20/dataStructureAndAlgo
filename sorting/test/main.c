// Utilities
#include "../utility/printArray.h"
#include "../utility/randomArrayGenerator.h"
// Sorting Algorithms
#include "../advanced/mergeSort.h"
#include "../advanced/quickSort.h"
#include "../advanced/shellSort.h"
#include "../simple/bubbleSort.h"
#include "../simple/insertionSort.h"
#include "../simple/selectionSort.h"
int main (void)
{
	int *array = randomArrayPermutation();
	printf("Before");
	printArray(array, ARRAY_SIZE);

	shellSort(array, ARRAY_SIZE);

	printf("After");
	printArray(array, ARRAY_SIZE);
	return 0;
}
