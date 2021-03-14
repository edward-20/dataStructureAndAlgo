#include "swap.h"
/* swap: interchange arr[i] and arr[j] 
 */
void swap (int arr[], int i, int j)
{
	int temp;

	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
	return;
}
