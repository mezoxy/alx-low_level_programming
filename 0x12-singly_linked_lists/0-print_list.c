#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_list - A function that prints all the elements of list_t
 * @h: A pointer
 * Return: NUmber of node
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	if (!h)
		return (0);
	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)");
		}
		printf("[%i] %s", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
