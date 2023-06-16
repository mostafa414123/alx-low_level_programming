#include <stdio.h>

/**
  * main - Entry function for program
  *
  * Description : Prints a hexadecimal number
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char alpha;

	for (alpha = '0'; alpha <= '9'; alpha++)
	{
		putchar(alpha);
	}

	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}

	putchar('\n');

	return (0);
}
