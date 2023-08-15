#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isalpha - Checks for alphabetic char
 * @c: the character being checked
 * Return: returns 1 if true else 0
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
