#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s:the first string
 * @accept:number of bytes in the first string
 * Return:number of strings in the first segment
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int ptr = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == accept[i])
		{
			ptr++;
		}
	}
	return (ptr);
}

