#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line
 * @str: string being printed in half
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0, length = 0, mid;

	while (str[length] != '\0')
		length++;
	mid = length / 2;
	if (length % 2 == 0)
	{
		for (i = mid; i < length; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = mid - 1; i < length; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
