#include "main.h"

/**
 * *malloc_checked - that allocates memory using malloc
 * @b:unsigned int
 * Return:returns a pointer to the memmory allocated
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
