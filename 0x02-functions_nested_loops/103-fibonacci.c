#include "main.h"
/**
 * main - Entry function
 *
 * Description: prints the sum of the even-valued terms
 *              whose values do not exceed 4,000,000
 *
 * Return: always 0 (success)
 */
int main(void)
{
	float result;
	unsigned long sum = 0, fibonacci_1 = 0, fibonacci_2 = 1;

	while (1)
	{
		sum = fibonacci_1 + fibonacci_2;
		while (sum <= 4000000)
		{
			if ((sum % 2) == 0)
				result += sum;
			fibonacci_1 = fibonacci_2;
			fibonacci_2 = sum;
		}
		if (sum <= 4000000)
			printf("%.0f\n", result)
		else
			break;
	}
	return (0);
}
