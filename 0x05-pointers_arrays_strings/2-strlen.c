#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: the input pointer to char
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}
	printf("%d\n", count);
}
