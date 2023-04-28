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
	list_t *freehead;

	while (head)
	{
		freehead = head->next;
		free(head->str);
		free(head);
		head = freehead;
	}
}
