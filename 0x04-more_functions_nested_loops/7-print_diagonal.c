#include "main.h"
/**
 *  print_diagonal - function that draws a diagonal line on the terminal
 *  @n: the number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int count, space;

	if (n > 0)
	{
		for (count = 1; count <= n; count++)
		{
			for (space = 1; space <= count; space++)
				_putchar(' ');
			_putchar('\\');
			if (count == n)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
