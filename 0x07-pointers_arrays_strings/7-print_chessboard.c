#include "main.h"
/**
 * print_chessboard - function that prints the chessboard
 * @a: the printed chessboard
 */
void print_chessboard(char (*a)[8])
{
	int count, index;

	for (count = 0; a[count][7]; count++)
	{
		for (index = 0; index < 8; index++)
			_putchar(a[count][index]);
		_putchar('\n');
	}
}
