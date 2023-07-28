#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - A function that free a list
 * @head: A pointer
 */
void free_list(list_t *head)
{
	list_t *ptr = head;

	while (ptr)
	{
		list_t *ptr1 = ptr->next;

		free(ptr->str);
		free(ptr);
		ptr = ptr1;
	}
}
