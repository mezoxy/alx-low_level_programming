#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - A function that revers a list
 * @head: A pointer
 * Return: A pointer
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr = NULL, *ptr1 = NULL;

	if (!*head)
		return (NULL);
	while (*head)
	{
		ptr1 = (*head)->next;
		(*head)->next = ptr;
		ptr = (*head);
		*head = ptr1;
	}
	*head = ptr;
	return (*head);
}
