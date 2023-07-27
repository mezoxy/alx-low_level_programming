#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - A function that add a node at the beginning
 * @head: the head of linked list
 * @str: A string to be duplicated
 * Return: A list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	ptr = malloc(sizeof(list_t));
	if (!ptr)
		return (NULL);
	ptr->str = malloc(sizeof(str));
	if (!ptr->str)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		ptr->next = *head;
		ptr->str = strdup(str);
		ptr->len = strlen(str);
		*head = ptr;
	}
	return (*head);
}
