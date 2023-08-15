#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 * Returns: returns 0
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');
	}
}
