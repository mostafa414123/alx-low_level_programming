#include <unistd.h>
#include "main.h"

/**
 * _putchar - function for printing a character
 *
 * Description: Write the character `c` to stdout
 * @c: The character to be printed
 *
 * Return: Always 1 (success)
 */
int _putchar(char c)
{
	int x;
	x = write(1, &c, 1);

	return (x);
}
~
