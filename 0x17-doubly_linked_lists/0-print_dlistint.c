#include "lists.h"

/**
 * print_dlistint - A function that  all the elements of a list
 * @h: A pointer
 * Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i;

	i = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
