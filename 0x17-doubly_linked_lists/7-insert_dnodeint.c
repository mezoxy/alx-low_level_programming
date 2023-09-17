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

	if (idx == 0)
		return (add_dnodeint(h, n));
	while (idx != 1)
	{
		tmp = tmp->next;
		idx--;
		if (!tmp)
			return (NULL);
	}
	if (!tmp->next)
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->next = tmp->next;
	new->n = n;
	new->prev = tmp;
	tmp->next->prev = new;
	tmp->next = new;
	return (new);
}
