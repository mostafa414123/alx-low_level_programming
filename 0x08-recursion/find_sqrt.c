#include "main.h"

/**
 * find_sqrt - Finds the square root of number.
 * @number: The number to find sqrt.
 * @sqrt: The root of number.
 *
 * Return: If the number has a square root.
 */
int find_sqrt(int number, int sqrt)
{
	if ((sqrt * sqrt) == number)
		return (sqrt);

	if (sqrt == number / 2)
		return (-1);

	return (find_sqrt(number, sqrt + 1));
}
