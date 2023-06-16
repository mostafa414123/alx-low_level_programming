#include <stdio.h>

/**
  * main - Entry function for program
  *
  * Description : Prints numbers with commas and space
  *
  * Return: Always 0 (Success);
  */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);

		if (n == '9')
		{
			break;
		}
		putchar(', ');
	}

	putchar('\n');

	return (0);
}
