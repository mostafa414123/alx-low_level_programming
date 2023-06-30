#include "main.h"
/**
 * *_strncpy - function that copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * Return: points to destnination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count = 0, source = 0;

	while (src[count++])
		source++;
	for (count = 0; src[count] && count < n; count++)
		dest[count] = src[count];
	for (count = source; count < n; count++)
		dest[count] = '\0';
	return (dest);
}
