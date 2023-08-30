#include "main.h"

/**
 * _strlen_recursion - that returns the length of a string
 * @s:string length being calculated
 * Return:length of string
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
