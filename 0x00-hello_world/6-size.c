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
	printf("Size of char is %zu\n", sizeof(char));
	printf("Size of int is %zu\n", sizeof(int));
	printf("Size of long int is %zu\n", sizeof(long int));
	printf("Size of long long int is %zu\n", sizeof(long long int));
	printf("Size of float is %zu\n", sizeof(float));

	return (0);
}
