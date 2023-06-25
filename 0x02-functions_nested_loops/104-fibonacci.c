#include <stdio.h>
/**
 * main - Entry Function
 *
 * Description: Prints the first 98 Fibonacci numbers
 * starting with 1 and 2, separated by a comma and space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int counter;
	unsigned long fibon1 = 0, fibon2 = 1;
	unsigned long fibon1_half1, fibon1_half2, fibon2_half1, fibon2_half2;
	unsigned long half1, half2, sum;

	for (counter = 0; counter < 92; counter++)
	{
		sum = fibon1 + fibon2;
		printf("%lu, ", sum);
		fibon1 = fibon2;
		fibon2 = sum;
	}
	fibon1_half1 = fibon1 / 10000000000;
	fibon2_half1 = fibon2 / 10000000000;
	fibon1_half2 = fibon1 % 10000000000;
	fibon2_half2 = fibon2 % 10000000000;
	for (counter = 93; counter < 99; counter++)
	{
		half1 = fibon1_half1 + fibon2_half1;
		half2 = fibon1_half2 + fibon2_half2;
		if (fibon1_half2 + fibon2_half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}
		printf("%lu%lu", half1, half2);
		if (counter != 98)
			printf(", ");
		fibon1_half1 = fibon2_half1;
		fibon1_half2 = fibon2_half2;
		fibon2_half1 = half1;
		fibon2_half2 = half2;
	}
	printf("\n");
	return (0);
}
