#include <unistd.h>

/**
 * _putchar - the function used to write the character w to stdout
 * @w: the character to print
 * Return: On success 1.
 * on error, -1 is returned, and error is set immediately
 */

int _putchar(char w)
{
	return (write(1, &w, 1));
}
