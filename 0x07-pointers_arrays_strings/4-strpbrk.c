#include "main.h"
/**
 * _strpbrk - function that searches a string for set of bytes
 * @s: the input string
 * @accept: The set of bytes to search
 * Return: pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int count;

	while (*s)
	{
		for (count = 0; accept[count]; count++)
		{
			if (*s == accept[count])
				return (s);
		}
		s++;
	}
	return ('\0');
}
