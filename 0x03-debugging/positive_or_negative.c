#include <stdio.h>
/**
 * positive_or_negative - function used to check number is
 * positive, negative or zero
 * @n: the input number that need to check
 * Return: Always 0 (success)
 */
int positive_or_negative(int n)
{
	if (n == 0)
		printf("%d is zero\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
