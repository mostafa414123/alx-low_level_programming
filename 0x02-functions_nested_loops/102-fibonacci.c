#include "main.h"
/**
 * main - Entry function
 *
 * Description: prints the first 50 Fibonacci numbers
 *              starting with 1 and 2
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int counter;
	unsigned long sum = 0, fibonacci_1 = 0, fibonacci_2 = 1;

	for (counter = 0; counter < 50; counter++)
	{
		sum = fibonacci_1 + fibonacci_2;
		printf("%lu", sum);
		fibonacci_1 = fibonacci_2;
		fibonacci_2 = sum;
		if (counter < 49)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
