#include "main.h"
/**
 * main - prints the numbers from 1 to 100, But for multiples of three
 * print Fizz instead of the number and for the multiples of five print Buzz
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int number;

	for (number = 1; number <= 100; number++)
	{
		if (number % 3 == 0 && number % 5 == 0)
			printf("FizzBuzz");
		else if (number % 3 == 0)
			printf("Fizz");
		else if (number % 5 == 0)
			printf("Buzz");
		else
			printf("%d", number);
		if (number != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
