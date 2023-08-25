#include "main.h"

/**
 * *cap_string - capitalizes all words of a string
 * @str: string being capiltalized
 * Return: str
 */
char *cap_string(char *str)
{
	int index = 0;
	char seperator[] = " \t\n,;.!?\"(){}";

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] < 'z')
		{
			if (index == 0)
			{
				str[index] -= 32;
			}
			else
			{
				int isSeperator = 0, i;

				for (i = 0; seperator[i]; i++)
				{
					if (str[index - 1] == seperator[i])
					{
						isSeperator = 1;
						break;
					}
				}
				if (isSeperator)
					str[index] -= 32;
			}
		}
		index++;
	}
	return (str);
}
