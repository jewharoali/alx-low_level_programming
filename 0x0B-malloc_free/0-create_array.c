#include "main.h"

/**
 * *create_array - creates an array of chars, and initializes it with
 * a specific char.
 * @size:size of the array
 * @c:the char to be initalised with
 * Return:a pointer to an array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = (char *)malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
