#include "randomArrayGenerator.h"
// Creates an array of size ARRAY_SIZE and fills it with random integers in the
// range 0 .. ARRAY_SIZE - 1
int *randomArray (void)
{
	time_t t;
	// In order for "rand" function to return "better" random numbers, we
	// must provide a seed to the "srand" function which initialises the
	// random function. "srand" expects an unsigned integer. Our seed will
	// be the time that the function was started. 
	srand((unsigned) time(&t));

	// Allocate memory
	int *array = malloc(ARRAY_SIZE * sizeof(int));
	
	int i;
	for(i = 0; i < ARRAY_SIZE; i++)
		array[i] = rand() % ARRAY_SIZE;
	return array;
}

// Creates an array of integers which is a permutation of the numbers 0
// .. ARRAY_SIZE - 1. Uses the Fisher-Yates Shuffle.
int *randomArrayPermutation (void)
{
	time_t t;
	// In order for "rand" function to return "better" random numbers, we
	// must provide a seed to the "srand" function which initialises the
	// random function. "srand" expects an unsigned integer. Our seed will
	// be the time that the function was started. 
	srand((unsigned) time(&t));

	// Allocate memory
	int *array = malloc(ARRAY_SIZE * sizeof(int));
	
	// Initialise array to be filled with values 0 .. ARRAY_SIZE
	int i;
	for (i = 0; i < ARRAY_SIZE; i++)
		array[i] = i;

	// Use the Fisher-Yates Shuffle to rearrange the values in the array and
	// thus produce a permutation
	// Iterate from the end of the array to the start
	for (i = ARRAY_SIZE - 1; i >= 0; i--)
	{
		// Choose an index between 0 .. i at random 
		int j = rand() % (i + 1);
		swap(array, i, j);
	}
	return array;
}
