#include "main.h"

/**
 * *create_array - creates an array of chars, and initializes it with
 * a specific char
 * @size: size of the array
 * @c: the char it is being initialised to
 * Return:pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int count;

	ptr = malloc(size * sizeof(char));

	if (size == 0 && ptr == NULL)
		return (NULL);
	for (count = 0; count < size; count++)
	{
		ptr[count] = c;
	}
	return (ptr);
}

