#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_listint - A function that prints
 * @h: A pointer
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
