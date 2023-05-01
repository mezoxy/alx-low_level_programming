#include "lists.h"
/**
 * free_listint - A function that frees a listint_t
 * @head: A pointer
 */
void free_listint(listint_t *head)
{
	listint_t *ptr = head;

	while (ptr)
	{
		ptr = ptr->next;
		free(head);
		head = ptr;
	}

}
