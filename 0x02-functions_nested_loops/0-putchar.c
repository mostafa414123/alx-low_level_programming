#include "main.h"

/**
 * main - Entry point
 *
 * Description: use function _putchar to print _putchar
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char arr[] = "_putchar";
	char i;

	for (i = 0; i < 8; i++)
	{
		_putchar(arr[i]);
	}
	_putchar('\n');
	return (0);
}
