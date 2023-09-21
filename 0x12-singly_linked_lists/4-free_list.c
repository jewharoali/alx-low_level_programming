#include "lists.h"

/**
 * free_list -  that frees a list_t list
 * @head:first node
 * Return:void
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head)
	{
		current = head->next;
		free(head->str);
		free(head);
		head = current;
	}
}
