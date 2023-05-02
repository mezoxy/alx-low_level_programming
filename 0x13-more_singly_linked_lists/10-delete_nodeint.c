#include "lists.h"
/**
 * delete_nodeint_at_index - a function the delete a node at an index
 * @head: A pointer
 * @index: The index
 * Return: 1 if it done else -1
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *prev, *curre;

	prev = *head;
	curre = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		(*head) = (*head)->next;
		free(prev);
		return (1);
	}
	while (i < index - 1)
	{
		if (!prev || !(prev->next))
			return (-1);
		prev = prev->next;
		i++;
	}
	curre = prev->next;
	prev->next = curre->next;
	free(curre);
	return (1);
}
