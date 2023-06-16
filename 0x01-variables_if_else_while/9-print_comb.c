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
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);

		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
