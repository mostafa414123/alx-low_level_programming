#include "main.h"
/**
 * *_strcat - function that concatenates two strings
 * @dest: destination location
 * @src: reservation location
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int count1 = 0, count2 = 0;

	while (dest[count1++])
		;
	for (count2 = 0; src[count2]; count2++)
		dest[count1] = src[count2];
	return (dest);
}
