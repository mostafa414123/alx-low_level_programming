#include <stdio.h>

/**
 * main - Entry point for the program
 *
 * Description : Prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}

	putchar('\n');
	return (0);
}
