#include <stdio.h>
#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: number in question
 * Return: returns 1 0 -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	return (0);
}

