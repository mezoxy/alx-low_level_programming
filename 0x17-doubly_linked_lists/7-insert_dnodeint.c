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
	unsigned int i;
	dlistint_t *p = *h, *p1;
	dlistint_t *inserted = NULL;

	if (!*h || idx == 0)
	{
		*h = add_dnodeint(h, n);
		return (*h); }
	i = 0;
	while (p)
	{
		/**if (idx == dlistint_len(*h))
		{
			*h = add_dnodeint_end(h, n);
			return (*h); }*/
		if (idx == i)
		{
			inserted = malloc(sizeof(dlistint_t));
			if (!inserted)
				return (NULL);
			inserted->n = n;
			p1->next = inserted;
			inserted->prev = p1;
			p->prev = inserted;
			inserted->next = p;
			return (*h);
		}
		p1 = p;
		p = p->next;
		i++;
	}
	return (NULL);
}
