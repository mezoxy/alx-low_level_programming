#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * print_list - A function that prints all the elements of a list
 * @h: A pointer to a list
 *
 *Return: Number of elements (size_t)
 */

size_t print_list(const list_t *h)
{
	int i = 1;

	if (!(h->str))
	{
		printf("[0] (nil)");
	}
	if (!h)
	{
		printf("Error\n");
		return (1);
	}
	while (h->str)
	{
		i++;
	}
	printf("[%u] %s", h->len, h->str);
	return (i);
}
