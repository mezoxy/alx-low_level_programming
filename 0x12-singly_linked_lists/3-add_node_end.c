#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - A function that add a node at the end of a list
 * Return: The address of the new element
 * @str: A string
 * @head: A pointer to a pointer
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *first = *head;

	list_t *last = malloc(sizeof(list_t));

	if (last == NULL)
	{
		return (NULL);
	}
	else
	{
		last->str = strdup(str);
		last->len = strlen(str);
		last->next = NULL;
	}
	if (*head == NULL)
	{
		*head = last;
		return (last);
	}
	while (first->next)
	{
		first = first->next;
	}
	first->next = last;
	return (last);
}
