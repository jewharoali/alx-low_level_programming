#include "lists.h"

/**
 * print_list - that prints all the elements of a list_t list
 * @h:a pointer to the first node
 * Return: returns a pointer to the next node
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		node_count++;
		h = h->next;
	}
	return (node_count);
}
