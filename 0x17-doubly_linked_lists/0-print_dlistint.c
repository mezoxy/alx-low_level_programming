#include "lists.h"

/**
 * print_dlistint - A function that  all the elements of a list
 * @h: A pointer
 * Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		h = h->next;
		printf("%u\n", h->n);
		i++;
	}
	return (i);
}
