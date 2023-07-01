#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer 10 bytes at a time
 * and showing the hex content,
 * @b: The buffer which printed.
 * @size: The number of printed bytes .
 */
void print_buffer(char *b, int size)
{
	int bt, count;

	for (bt = 0; bt < size; bt += 10)
	{
		printf("%08x: ", bt);

		for (count = 0; count < 10; count++)
		{
			if ((count + bt) >= size)
				printf("  ");

			else
				printf("%02x", *(b + count + bt));

			if ((count % 2) != 0 && count != 0)
				printf(" ");
		}

		for (count = 0; count < 10; count++)
		{
			if ((count + bt) >= size)
				break;

			else if (*(b + count + bt) >= 31 &&
				 *(b + count + bt) <= 126)
				printf("%c", *(b + count + bt));

			else
				printf(".");
		}

		if (bt >= size)
			continue;

		printf("\n");
	}

	if (size <= 0)
		printf("\n");
}
