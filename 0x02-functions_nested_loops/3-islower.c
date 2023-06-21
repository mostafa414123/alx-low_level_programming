#include "main.h"
/**
 * int _islower - function that checks for lowercase character
 *
 * @c: the input character
 *
 * Return: 1 (success) , if c is lowercase , 0 otherwise
 */

int _islower(int c)
{
	int num;
	if(c >= 'a' && c <= 'z')
		num = 1;
	else
		num = 0;
	return (num);
}
