#include "main.h"

/**
 * _strlen - that returns the length of a string
 * @s: pointer to the first character
 * Return: 0
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
