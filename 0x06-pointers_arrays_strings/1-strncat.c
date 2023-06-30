#include "main.h"
/**
 * *_strncat -  function that concatenates two strings
 * @dest: the distination string
 * @src: the source string
 * @n: number of bytes
 * Return: pointer oints to destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0, index = 0;

	while (dest[count++])
		index++;
	for (count = 0; src[count] && count < n; count++)
		dest[index++] = src[count];
	return (dest);
}
