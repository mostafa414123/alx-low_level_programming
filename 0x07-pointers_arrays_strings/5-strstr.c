#include "main.h"
/**
 * _strstr - function that locates a substring
 * @haystack: the searched string
 * @needle: the located substring
 * Return: pointer to the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int count = 0;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		if (haystack[count] == needle[count])
		{
			do {
				if (needle[count + 1] == '\0')
					return (haystack);

				count++;

			} while (haystack[count] == needle[count]);
		}

		haystack++;
	}

	return ('\0');
}
