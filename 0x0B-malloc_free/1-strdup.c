#include "main.h"

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str:string copy
 * Return:NULL if str = NULL
 */
char *_strdup(char *str)
{
	int i, j;
	char *ptr;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	ptr = malloc(i * sizeof(char) + 1);
	if (ptr == NULL)
		return (NULL);
	for (j = 0; str[j] != '\0'; j++)
		ptr[j] = str[j];
	ptr[j] = '\0';
	return (ptr);
}
