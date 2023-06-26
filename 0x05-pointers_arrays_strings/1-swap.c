#include "main.h"
/**
 * swap_int - function that swaps the values of two integers
 * @a: the first input pointer
 * @b: the second input pointer
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
