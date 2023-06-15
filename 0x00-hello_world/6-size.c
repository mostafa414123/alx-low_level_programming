/*
 * File: 6-size.c
 * Auth: Mostafa Khaled
 */

#include <stdio.h>

/**
 * main - Prints the size of various data types
 *
 * Return: should be 0.
 */
int main(void)
{
	printf("Size of a char: %zu\n", sizeof(char));

	printf("Size of an int: %zu\n", sizeof(int));

	printf("Size of a long int: %zu\n", sizeof(long int));

	printf("Size of a long long int: %zu\n", sizeof(long long int));

	printf("Size of a float: %zu\n", sizeof(float));

	return (0);
}
