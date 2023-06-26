#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: the input pointer to char
 */
void print_rev(char *s)
{
	int count = 0;

	while (*str != '\0')
	{
		count++;
	}
	while (count >= 0)
	{
		printf("%c", str[count]);
		str--;
		count--;
	}
	printf("\n");
}
