#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - A function that frees a list
 * @head: A pointer
 *
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
