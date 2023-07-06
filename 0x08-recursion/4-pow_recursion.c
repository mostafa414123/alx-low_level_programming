#include "main.h"
/**
 * _pow_recursion - returns the value of x to the power of y
 * @x: the base value
 * @y: the power value
 * Return: the result of the power value
 */
int _pow_recursion(int x, int y)
{
	int value = x;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	value *= _pow_recursion(x, y - 1);
	return (value);
}
