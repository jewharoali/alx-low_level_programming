#include "main.h"

/**
 * *_memcpy - function that copies memory area
 * @dest:destination string
 * @src:source string
 * @n:nnumber of bytes being copied
 * Return:a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
		ptr = dest;
	}
	return (ptr);
}
