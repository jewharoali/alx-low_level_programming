#include <stdio.h>
#include "main.h"

/**
 * times_table - prints the timetable for 9
 * Return: returns 0
 */
void times_table(void)
{
	int num, mult, pro;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');
		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');
			pro = num * mult;
			if (pro <= 9)
				_putchar(' ');
			else
				_putchar((pro / 10) + '0');
			_putchar(pro % 10 + '0');
		}
		_putchar('\n');
	}
}
