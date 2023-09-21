#include <stdio.h>

void print_quote(void) __attribute__ ((constructor));

/**
 * print_quote - prints a quote
 * Return: void
 */
void print_quote(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
