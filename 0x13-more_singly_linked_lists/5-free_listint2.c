#include "lists.h"
/**
 * free_listint2 - A function that frees a list
 * @head: A pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr = (*head);

	if (head == NULL)
	{
		return;
	}
	while (ptr)
	{
		ptr = ptr->next;
		free(*head);
		*head = ptr;
	}
	*head = NULL;
}
