#include "lists.h"
#include <stdlib.h>
/**
 */

int pop_listint(listint_t **head)
{
	int m;
	listint_t *ptr;

	if (!*head)
		return (0);
	ptr = *head;
	m = (*head)->n;
	*head = ptr->next;
	free(ptr);
	return (m);
}
