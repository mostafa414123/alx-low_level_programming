#include "main.h"
/**
 * print_array - function that prints n elements of an
 * array of integers, followed by a new line
 * @a: the pointer to store the array
 * @n: the number of elements to be printed
 */
void print_array(int *a, int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		printf("%d", a[count]);
		if (count == n - 1)
			continue;
		printf(", ");
	}
	printf("\n");
}
