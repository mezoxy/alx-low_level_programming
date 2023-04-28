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
	*head = malloc(sizeof(list_t));

	if (*head == NULL)
	{
		return (NULL);
	}
	else
	{
		if ((*head)->str == NULL)
		{
			(*head)->str = strdup(str);
			(*head)->next->next = NULL;
		}
		else
		{
			(*head)->str = strdup(str);
			(*head)->next->next = (*head)->next;
		}
	}
	return (*head);
}
