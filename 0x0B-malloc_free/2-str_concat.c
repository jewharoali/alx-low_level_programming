#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1:destination string
 * @s2:string being concatenated
 * Return:a pointer to a newly allocated memory
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j;

	if (s1 == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	ptr = (char *)malloc((1 + i) * sizeof(char));
	if (s2 == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
	{
		ptr[j] = s1[j];
	}
	j = 0;
	while (s2[j] != '\0')
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}
