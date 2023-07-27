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
	list_t *ptr = NULL;
	size_t i = 0;

	if (!h)
		return (0);
	while (ptr)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)");
		else
		{
			printf("[%i] %s", ptr->len, ptr->str);
		}
		ptr = ptr->next;
		i++;
	}
	return (i);
}
