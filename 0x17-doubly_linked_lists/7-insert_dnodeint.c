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
	if (idx == 0)
	{ *h = add_dnodeint(h, n);
		free(new);
		return (*h); }
	i = 0;
	while (tmp)
	{
		if (idx == i)
		{
			new->next = tmp;
			new->prev = tmp->prev;
			tmp->prev->next = new;
			tmp->prev = new;
			return (*h);
		}
		tmp = tmp->next;
		i++;
	}
	if (idx == i)
	{
		*h = add_dnodeint_end(h, n);
		free(new);
		return (*h);
	}
	return (NULL);
}
