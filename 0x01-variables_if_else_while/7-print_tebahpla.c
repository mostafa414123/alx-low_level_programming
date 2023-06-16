#include <stdio.h>

/**
  * main - Entry function for program
  *
  * Description : Prints the alphabet at reverse
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}

	putchar('\n');

	return (0);
}
