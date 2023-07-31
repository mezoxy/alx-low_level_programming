#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - A function that returns the number of elements
 * @h: A pointer
 * Return: Number of elements
 */

size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

	if (!h)
		return (0);
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
