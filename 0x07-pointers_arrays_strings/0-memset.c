#include "main.h"

/**
 * *_memset - function that fills memory with a constant bytee
 * @s:pointer to the space in memory to be filled
 * @b:value to be filled
 * @n:number of bytes to filled
 * Return:ptr to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr;

	ptr = s + n;
	s[n] = b;
	return (ptr);
}
