#include "main.h"

/**
 * find_sqrt - Finds the square root of number.
 * @number: The number to find sqrt.
 * @sqrt: The root of number.
 * Return: If the number has a square root.
 */
int find_sqrt(int number, int sqrt)
{
	if ((sqrt * sqrt) == number)
		return (sqrt);
	if (sqrt == number / 2)
		return (-1);
	return (find_sqrt(number, sqrt + 1));
}

/**
 * _sqrt_recursion - returns natural square root of number
 * @n: the input number
 * Return: the sqrt of number
 */
int _sqrt_recursion(int n)
{
	int sqrt = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (find_sqrt(n, sqrt));
}
