#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_list - A function that prints all the elements of a list
 * @h: A pointer to a list
 *
 *Return: Number of elements (size_t)
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	if (h == NULL)
	{
		printf("Error\n");
		return (1);
	}
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			return (1);
		}
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
