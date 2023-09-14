#include "lists.h"

/**
 * dlistint_len - A function that returns the number of elements in a linked
 * @h: A pointer
 * Return: Num of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	if (!h)
		return (0);
	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
