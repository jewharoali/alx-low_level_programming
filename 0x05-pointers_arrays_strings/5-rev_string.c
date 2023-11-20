#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s:pointer to string being reversed
 * Return:void
 */
void rev_string(char *s)
{
	int i = 0, j;
	char rev = s[0];

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		i--;
		rev = s[j];
		s[j] = s[i];
		s[i] = rev;
	}
}
