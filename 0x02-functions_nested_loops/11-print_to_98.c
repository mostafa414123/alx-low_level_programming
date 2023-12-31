#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Prints all natural numbers from input to 98
 * @n: The number to begin count.
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("%d\n", n);
	}
}

