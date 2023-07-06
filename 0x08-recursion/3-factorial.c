#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: the given number
 * Return: the factorial of n
 */
int factorial(int n)
{
	int fact = n;

	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	fact *= factorial(n - 1);
	return (fact);
}
