#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: the input pointer to char
 */
void puts_half(char *str)
{
	int count;

	for (count = 0; count != '\0'; count++)
		;
	count++;
	for (count /= 2; str[count] != '\0'; count++)
		_putchar(str[count]);
	_putchar('\n');
}
