#include "main.h"

/**
 * _puts_recursion - function that prints a string
 * @s:string being recursed
 * Return:void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	puts(s);
}
