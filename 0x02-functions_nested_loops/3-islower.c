#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _islower - Checks if char is lowercase
 * @c: character being checked
 * Return: returns 1 if true else return 0
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
