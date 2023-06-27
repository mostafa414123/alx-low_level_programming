#include "main.h"
/**
 * *_strcpy - function that copies the string pointed by src
 * to the buffer pointed to dest
 * @dest: buffer to copy the string
 * @src: the source string that copied
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (src[count])
	{
		dest[count] = src[count];
		count++;
	}
	return (dest);
}
