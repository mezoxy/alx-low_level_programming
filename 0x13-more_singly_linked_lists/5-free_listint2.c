#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - A function that frees a list
 * @head: A pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
	*head = NULL;
}
