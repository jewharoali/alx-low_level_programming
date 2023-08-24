#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string being compared
 * @s2: second string being compared
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] < s2[i])
				return (-15);
			else
				return (15);
		}
		i++;
	}
	return (0);
}
