#include "main.h"
/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * @str: the iput pointer to char
 */
void puts2(char *str)
{
	int count;

	for (count = 0; count != '\0'; count++)
	{
		if (count % 2 == 0)
			_putchar(str[count]);
	}
	_putchar('\n');
}
