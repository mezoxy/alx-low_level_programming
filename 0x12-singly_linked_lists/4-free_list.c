#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * free_list - A function that free a list
 * @head: A pointer
 */
void free_list(list_t *head)
{
	while (head)
	{
		free(head->str);
		head = head->next;
		free(head->next);
	}
}
