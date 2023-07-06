#include "main.h"

/**
 * is_divisible - Checks the number is divisible or not.
 * @number: The input number.
 * @div: The divisor of number.
 * Return: If divisible - 0.
 *         If not divisible - 1.
 */
int is_divisible(int number, int div)
{
	if (number % div == 0)
		return (0);
	if (div == number / 2)
		return (1);
	return (is_divisible(number, div + 1));
}

/**
 * is_prime_number - function gets the prime number
 * @n: the input number
 * Return: the prime number
 */
int is_prime_number(int n)
{
	int diverse = 2;

	if (n <= 1)
		return (0);

	if (n > 1 && n <= 3)
		return (1);

	return (is_divisible(n, divesre));
}
