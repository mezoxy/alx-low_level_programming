#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_nodeint_at_index - A function that return the nth node
 * Return: A node
 * @head: A pointer
 * @index: The index of the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i = 0;
	unsigned int j = 0;
	ptr = head;

	while (ptr)
	{
		ptr = ptr->next;
		j++;
	}
	if (index <= j && ptr != NULL)
	{
		if (index != i)
		{
			ptr = ptr->next;
			i++;
		}
		return (ptr);
	}
	return (NULL);
}
