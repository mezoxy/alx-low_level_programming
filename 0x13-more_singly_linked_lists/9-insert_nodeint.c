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
	unsigned int i;

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
	ptr1 = *head;
	i = 0;
	while (i < idx - 1)
	{
		if (!ptr1 || !ptr1->next)
			return (NULL);
		ptr1 = ptr1->next;
		i++;
	}
	ptr->next = ptr1->next;
	ptr1->next = ptr;
	return (*head);
}
