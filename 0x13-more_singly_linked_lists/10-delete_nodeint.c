#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - A function that deletes the node at index
 * @head: A pointer
 * @index: The position
 * Return: 1 (Success) or -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = *head, *ptr1, *ptr2;
	unsigned int i = 0;

	if (!*head)
		return (-1);
	ptr2 = *head;
	while (ptr2)
	{
		ptr2 = ptr2->next;
		i++;
	}
	if (index > i)
		return (-1);
	if (index == 0)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
		return (1);
	}
	index--;
	while (index != 0)
	{
		ptr = ptr->next;
		index--;
	}
	ptr1 = ptr->next;
	ptr2 = ptr->next->next;
	ptr->next = ptr2;
	free(ptr1);
	return (1);
}
