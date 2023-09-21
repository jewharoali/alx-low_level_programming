#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h:pointer to the next node
 * Return: returns 0 if successful
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
