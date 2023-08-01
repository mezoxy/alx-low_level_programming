#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * insert_nodeint_at_index - Inserts a new node at an idx position
 * @head: A pointer
 * @n: Data to be add
 * @idx: The position
 * Return: A pointer
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *position;
	unsigned int x = 0;

	ptr = malloc(sizeof(listint_t));
	if (!ptr || (!*head && idx != 0))
		return (NULL);
	ptr->n = n;
	if (idx == 0)
	{
		*head = ptr;
		ptr->next = NULL;
		return (*head);
	}
	position = *head;
	while (position)
	{
		if (x == idx - 1)
		{
			ptr->next = position->next;
			position->next = ptr;
			return (*head);
		}
		position = position->next;
		x++;
	}
	return (NULL);
}
