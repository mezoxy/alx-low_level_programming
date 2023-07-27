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
	ptr->next = *head;
	*head = ptr;
	ptr->str = strdup(str);
	return (*head);
}
