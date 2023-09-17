#include "lists.h"

/**
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del = *head;

	if (index == 0)
	{
		if (!*head)
			return (-1);
		del = (*head)->next;
		del->prev = NULL;
		free(*head);
		*head = del;
		return (1); }
	while (index)
	{
		del = del->next, index--;
		if (!del)
			return (-1); }
	del->next->prev = del->prev;
	del->prev->next = del->next;
	free(del);
	return (1);
}
