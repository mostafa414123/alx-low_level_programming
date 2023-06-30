#include "main.h"
/**
 * *_strcat - function that concatenates two strings
 * @dest: resulting string to return
 * @src: resulting string to append
 * Return:  The pointer destination string @dest
 */
char *_strcat(char *dest, char *src)
{
	int count = 0, index = 0;

	while (dest[count++])
		index++;
	for (count = 0; src[count]; count++)
		dest[index++] = src[count];
	return (dest);
}
