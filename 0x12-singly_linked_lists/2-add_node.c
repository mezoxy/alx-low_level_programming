#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * *add_node - A function that adds a new node
 * Return: The address of the new element
 * @head: A pointer
 * @str: A string
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *head1 = malloc(sizeof(list_t));

	if (head1 == NULL)
	{
		return (NULL);
	}
	else
	{
		head1->str = strdup(str);
		head1->len = strlen(str);
		head1->next = (*head);
		(*head) = head1;
	}
	return (*head);
}
