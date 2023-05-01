#include "lists.h"
/**
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
