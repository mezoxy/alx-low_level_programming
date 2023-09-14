#include "lists.h"

/**
 * free_dlistint - A function that frees a doubly linked list
 * @head: A pointer
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	if (!head)
		return;
	while (ptr)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
