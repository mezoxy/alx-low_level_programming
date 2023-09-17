#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * dlistint_t linked list
 *
 * @head: A pointer
 * @index: An index
 * Return: 1 if it succeeded, else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del;

	if (!head)
		return (-1);
	if (index == 0)
	{ if (!*head)
		return (-1);
		if ((*head)->next)
		{ del = (*head)->next, del->prev = NULL;
			free(*head), *head = del; }
		else
			free(*head);
		return (1); }
	del = *head;
	while (index)
	{
		del = del->next, index--;
		if (!del)
			return (-1);
	}
	del->next->prev = del->prev;
	del->prev->next = del->next;
	free(del);
	return (1);
}
