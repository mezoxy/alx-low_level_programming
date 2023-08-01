#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - A function that frees a list
 * @head: A pointer
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	ptr = head;
	while (ptr)
	{
		head = ptr->next;
		free(ptr);
		ptr = head;
	}
}
