#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: head of list
 */

size_t list_len(const list_t *h)
{
	size_t num_of_elements = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		num_of_elements++;
	}

	return (num_of_elements);
}
