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
	 * write your line of code here...
	 * Remember:
	 * - you are not allowed to use a
	 * - you are not allowed to modify p
	 * - only one statement
	 * - you are not allowed to code anything else than this line of code
	 */
	*(ptr + 5) = 98;
	/* ...so that this prints 98\n */
	printf("arr[2] = %d\n", arr[2]);
	return (0);
}
