#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 *
 * @n: the input number
 *
 * Return: the last digit of number
 */

int print_last_digit(int n)
{
	int digit;

	if (n < 0)
	{
		digit = -1 * (n % 10);
	}
	else
	{
		digit = n % 10;
	i}
	_putchar(digit + '0');
	return (digit);
}
