#include "main.h"

/**
 * print_number - function prints an integer.
 * @n: the input integer.
 */
void print_number(int n)
{
	unsigned int number = n;

	if (n < 0)
	{
		_putchar('-');
		number = -1 * number;
	}
	if ((number / 10) > 0)
		print_number(number / 10);
	_putchar((number % 10) + '0');
}
