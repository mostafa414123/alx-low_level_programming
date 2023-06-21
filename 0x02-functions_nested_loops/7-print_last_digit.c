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
	if (n < 0)
		n *= -1;
	n %= 10;
	printf("%d", n);
	return (n);
}
