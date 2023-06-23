#include "main.h"
/**
 *  print_diagonal - function that draws a diagonal line on the terminal
 *  @n: the number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
			break;
		if (i != 0)
		{
			_putchar(' ');
			_putchar('\');
		}
		else
			_putchar('\');
		_putchar('\n');
	}
	_putchar('\n');
}
