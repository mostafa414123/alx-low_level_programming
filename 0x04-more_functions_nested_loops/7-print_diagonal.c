#include "main.h"
/**
 *  print_diagonal - function that draws a diagonal line on the terminal
 *  @n: the number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int count, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (count = 0; count < n; count++)
		{
			for (space = 0; space < n; space++)
			{
				_putchar(' ');
			}
			_putchar('\');
			_putchar('\n');
		}
	}
}
