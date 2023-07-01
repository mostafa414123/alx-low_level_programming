#include <stdio.h>

/**
 * main - entry function
 * Return: always 0
 */
int main(void)
{
	int num;
	int arr[5];
	int *ptr;

	arr[2] = 1024;
	ptr = &num;
	/*
	 * write the code here...
	 * Remember:
	 * - you don't allow to use a
	 * - you don't allow to modify p
	 * - only use one statement
	 * - you are allowed only use this line of code
	 */
	*(ptr + 5) = 98;
	/* this prints 98\n */
	printf("arr[2] = %d\n", arr[2]);
	return (0);
}
