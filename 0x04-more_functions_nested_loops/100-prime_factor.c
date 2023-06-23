#include "main.h"
/**
 * main - Finds and prints the largest prime factor of
 * number 612852475143, followed by a new line
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long factor = 612852475143, division = 0;

	while (division < (factor / 2))
	{
		if ((factor % 2) == 0)
		{
			factor /= 2;
			continue;
		}
		for (division = 3; division < (factor / 2); division += 2)
		{
			if ((factor % division) == 0)
			{
				factor /= division;
			}
		}
	}
	printf("%lu\n", factor);
	return (0);
}
