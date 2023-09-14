#include "lists.h"

/**
 * print_dlistint - A function that  all the elements of a list
 * @h: A pointer
 * Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	if (!h)
	{
		printf("\n");
		return (0);
	}
	i = 0;
	while (h)
	{
		printf("%u\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
