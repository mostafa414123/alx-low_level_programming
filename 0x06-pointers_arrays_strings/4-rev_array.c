#include "main.h"
/**
 * reverse_array - function reverses the content of an array of integers
 * @a: pointer recieve array of integers
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int count, swap;

	for (count = (n - 1); count >= (n / 2); count--)
	{
		swap = a[n - 1 - count];
		a[n - 1 - count] = a[count];
		a[count] = swap;
	}
}
