#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - A function
 * @head: A pointer
 * @idx: A position
 * @n: Data
 * Return: A pointer
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *ptr1;

	if (!*head && idx > 0)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	if (idx == 0)
	{
		*head = ptr;
		return (*head);
	}
	if (idx < listint_len(*head))
	{
	ptr1 = *head;
	idx--;
	while (idx != 0)
	{
		ptr1 = ptr1->next;
		idx--;
	}
	ptr->next = ptr1->next;
	ptr1 = ptr;
	return (*head);
	}
	return (NULL);
}
