#include "main.h"
/**
 * main - Entry function
 *
 * Description: computes and prints the sum of all the
 *              multiples of 3 or 5 below 1024
 *
 * Return: always 0 (succes)
 */
int main(void)
{
	int number, sum;

	for (number = 0; number < 1024; number++)
	{
		if (((number % 5) == 0) || ((number % 3) == 0))
		{
			sum += number;
		}
	}
	printf("%d\n", sum);
	return (0);
}
