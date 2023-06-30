#include "main.h"
/**
 * *leet - function that encodes a string into 1337
 * @str: the encoded string
 * Return: pointer to encoded string
 */
char *leet(char *str)
{
	int c1 = 0, c2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[c1])
	{
		for (c2 = 0; c2 <= 7; c2++)
		{
			if (str[c1] == leet[c2] || str[c1] - 32 == leet[c2])
				str[c1] = c2 + '0';
		}
		c1++;
	}
	return (str);
}
