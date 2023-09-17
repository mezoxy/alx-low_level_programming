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
	dlistint_t *new, *tmp;

	if (!*h && idx > 0)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	tmp = *h;
	while (tmp)
	{
		idx--;
		if (idx == 0)
		{
			if (tmp->next)
			{ new = malloc(sizeof(dlistint_t));
				if (!new)
					return (NULL);
				new->n = n, new->next = tmp->next, new->prev = tmp;
				tmp->next->prev = new, tmp->next = new;
				return (new); }
			return (add_dnodeint_end(h, n));
		}
		tmp = tmp->next;
	}
	return (NULL);
}
