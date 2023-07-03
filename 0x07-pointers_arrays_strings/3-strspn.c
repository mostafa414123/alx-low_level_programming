#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: the input string
 * @accept: the measured prefix
 * Return: number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int size = 0;
	int count;

	while (*s)
	{
		for (count = 0; accept[count]; count++)
		{
			if (*s == accept[count])
			{
				size++;
				break;
			}

			else if (accept[count + 1] == '\0')
				return (size);
		}

		s++;
	}

	return (size);
}
