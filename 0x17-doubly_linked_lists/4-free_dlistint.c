#include "lists.h"

/**
 * free_dlistint - A function that frees a doubly linked list
 * @head: A pointer
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;

	while(ptr)
	{
		ptr = ptr->next;
		free(head);
		head = ptr;
	}
}
