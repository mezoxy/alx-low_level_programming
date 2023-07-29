#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - A function that adds a new node at the end of a list
 * @head: A pointer
 * @str: A string to be duplicated
 * Return: A pointer
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *ptr1;

	ptr = malloc(sizeof(list_t));
	if (!ptr)
		return (NULL);
	ptr->str = strdup(str);
	if (!ptr->str)
	{
		free(ptr);
		return (NULL);
	}
	ptr->len = strlen(str);
	ptr->next = NULL;
	if (!*head)
	{
		*head = ptr;
		return (*head);
	}
	ptr1 = *head;
	while (ptr1->next)
	{
		ptr1 = ptr1->next;
	}
	ptr1->next = ptr;
	return (*head);
}
