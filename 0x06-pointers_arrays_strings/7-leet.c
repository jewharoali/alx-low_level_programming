#include "main.h"

/**
 * *leet - that encodes a string into 1337
 * @str: string being encoded
 * Return: str
 */
char *leet(char *str)
{
	char replacement[] = "AaEeOoTtLl";
	char leetChar[] = "44337011";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; replacement[j] != '\0'; j++)
		{
			if (str[i] == replacement[j])
			{
				str[i] = leetChar[j];
				break;
			}
		}
	}
	return (str);
}
