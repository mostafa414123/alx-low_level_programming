#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer
 *
 * @n: the input number
 *
 * Return: the absolute number
 */
int _abs(int n)
{
	if (n < 0)
	{
		n *= -1;
	}
	return (n);
}
