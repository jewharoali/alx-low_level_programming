#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: how many bytes will be appended from the source
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
