#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * free_listint2 - A function that frees a listint_t list.
 * @head: A pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	ptr = *head;
	while (*head
			)
	{
		*head = (*head)->next;
		free(ptr);
		ptr = *head;
	}
	head = NULL;
}
