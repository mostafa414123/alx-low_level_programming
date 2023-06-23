#include "main.h"
/**
 * print_square - function that prints a square, followed by a new line
 * @size: it is the size of the square
 */
void print_square(int size)
{
	int height, width;

	if (height > 0)
	{
		for (height = 0; height < size; height++)
		{
			for (width = 0; width < size; width++)
			{
				_putchar('#');
			}
			if (height == (size - 1))
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
