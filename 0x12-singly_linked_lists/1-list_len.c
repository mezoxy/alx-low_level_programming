#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - A function that calculates num of element in list_t
 * @h: A pointer
 * Return: Num of elements
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (h->str)
			i++;
		h = h->next;
	}
	return (i);
}
