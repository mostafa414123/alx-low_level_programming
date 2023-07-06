#include "main.h"
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
