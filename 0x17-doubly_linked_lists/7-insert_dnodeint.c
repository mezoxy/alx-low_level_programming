#include "lists.h"

/**
 * insert_dnodeint_at_index - A function
 * @h: A pointer
 * @idx: An inedx
 * @n: Data
 * Return: A node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp = *h;
	unsigned int i;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	i = 0;
	while (tmp && *h)
	{
		if (idx == i)
		{
			new->next = tmp;
			new->prev = tmp->prev;
			if (tmp->prev)
				tmp->prev->next = new;
			else
				*h = new;
			tmp->prev = new;
			return (*h);
		}
		tmp = tmp->next;
		i++;
	}
	if (idx == i)
	{
		free(new);
		return (add_dnodeint_end(h, n));
	}
	return (NULL);
}
