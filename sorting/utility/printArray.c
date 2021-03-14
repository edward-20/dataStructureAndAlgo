#include "printArray.h"
// Print an array of size n
void printArray(int arr[], int n) {
	printf("{");
	int i;
	// printing all keys except the last (for prettier formatting)
	for (i = 0; i <= n - 2; i++) {
		printf("%d, ", arr[i]);
	}
	printf("%d}\n", arr[++i]);
	return;
}
