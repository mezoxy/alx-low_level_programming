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
	listint_t *ptr, *ptr1 = *head;
	unsigned int i = 0;

	if (!*head && idx > 0)
		return (NULL);
	while (ptr1)
	{
		i++;
		ptr1 = ptr1->next;
	}
	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);
	ptr->n = n;
	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
		return (*head);
	}
	if (idx <= i)
	{
		ptr1 = *head;
		idx--;
		while (idx != 0)
		{
			ptr1 = ptr1->next;
			idx--;
		}
		ptr->next = ptr1->next;
		ptr1->next = ptr;
		return (*head);
	}
	return (NULL);
}
