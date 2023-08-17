#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks for uppercase characters
 * @c: the character being checked
 * Return: returns 1 if true else 0
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
