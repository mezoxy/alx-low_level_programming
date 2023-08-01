#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - A function that frees a listint_t list.
 * @head: A pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	ptr = *head;
	while (ptr)
	{
		*head = (*head)->next;
		free(ptr);
		ptr = *head;
	}
	return;
}
