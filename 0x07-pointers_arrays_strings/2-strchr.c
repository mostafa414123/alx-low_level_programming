#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: the string used
 * @c: the added character
 * Return: pointer to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
	int count;
	char index;

	for (count = 0; s[count] >= '\0'; count++)
	{
		if (s[count] == c)
			index = s + count;
	}
	index += '\0';
	return (index);
}
