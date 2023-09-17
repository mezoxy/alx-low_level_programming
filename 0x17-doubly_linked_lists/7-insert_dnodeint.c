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

	i = 0;
	while (tmp)
	{
		if (idx == 0)
			return (add_dnodeint(h, n));
		if (idx == i)
		{
			if (!tmp->next)
				return (add_dnodeint_end(h, n));
			new = malloc(sizeof(dlistint_t));
			new->n = n;
			new->next = tmp;
			new->prev = tmp->prev;
			tmp->prev->next = new;
			tmp->prev = new;
			return (*h);
		}
		i++;
		tmp = tmp->next;
	}
	return (NULL);
}
