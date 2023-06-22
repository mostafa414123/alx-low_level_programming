#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the input number
 */
void print_times_table(int n)
{
	int product, multiple, number;

	if (n >= 0 && n <= 15)
	{
		for (number = 0; number <= n; ++number)
		{
			_putchar(48);
				for (multiple = 1; multiple <= n; ++multiple)
				{
					_putchar(',');
					_putchar(' ');
					product = number * multiple;
					if (product <= 99)
						_putchar(' ');
					if (product <= 9)
					{
						_putchar(' ');
					}
					else if (product >= 10 && product <= 99)
					{
						_putchar((product / 10) + 48);
					}
					else if (product >= 100)
					{
						_putchar((product / 100) + 48);
						_putchar((product / 10) % 10 + 48);
					}
					_putchar((product % 10) + 48);
				}
			_putchar('\n');
		}
	}
}
