#include "main.h"

/**
 * print_times_table - function that prints the n times table, starting with 0
 * @n:nth number
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, prod;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			prod = i * j;

			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (prod < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (prod < 100)
				{
					_putchar(' ');
				}
			}
			if (prod <= 9)
				_putchar('0' + prod);
			else if (prod <= 99)
			{
				_putchar('0' + prod / 10);
				_putchar('0' + prod % 10);
			}
			else if (prod > 99)
			{
				_putchar('0' + prod / 100);
				_putchar('0' + (prod / 10) % 10);
				_putchar('0' + prod % 10);
			}
		}
		_putchar('\n');
	}
}
