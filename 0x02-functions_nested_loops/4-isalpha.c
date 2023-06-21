#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character
 *
 * @c: the input character
 *
 * Return: 1 (success) if c is a letter, lowercase or uppercase, 0 otherwise
 */

int _isalpha(int c)
{
	int num;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		num = 1;
	else
		num = 0;
	return (num);
}

