#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: the input pointer to char
 */
void rev_string(char *s)
{
	int count, iter;
	char swap;

	for (count = 0; s[count] != '\0'; count++)
		;
	for (iter = 0; iter < count / 2; iter++)
	{
		swap = s[iter];
		s[iter] = s[count - iter - 1];
		s[count - iter - 1] = swap;
	}
}
