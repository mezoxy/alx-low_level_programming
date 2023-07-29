#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - A function that prints elements of a list
 * Return: The num of nodes
 * @h: A pointer to a list
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h->str ? printf("[%u] %s\n", h->len, h->str) : printf("[0] (nil)\n");
		h = h->next;
		i++;
	}
	return (i);
}
