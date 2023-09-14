#include "lists.h"

/**
 * get_dnodeint_at_index - A function
 * @head: A pointer
 * @index: An index
 * Return: A node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *pt = head;

	i = 0;
	while (pt)
	{
		if (index == i)
			return (pt);
		i++;
		pt = pt->next;
	}
	return (NULL);
}
