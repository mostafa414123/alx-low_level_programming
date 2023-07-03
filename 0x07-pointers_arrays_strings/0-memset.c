#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: the memory area
 * @b: the constant type
 * @n: the number of bytes
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		s[index] = b;
	return (s);
}
