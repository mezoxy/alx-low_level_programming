#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * listint_len - Returns the number of elements in a linked list
 * Return: Number of elements
 * @h: A pointer
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
