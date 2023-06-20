#include "main.h"

/**
  * main - entry point
  *
  * Description: printing _putchar using _putchar function
  *
  * Return: Always 0
  */

int main(void)
{
	char i;
	char arr[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(arr[i]);
	}
	_putchar('\n');
	return (0);
}

