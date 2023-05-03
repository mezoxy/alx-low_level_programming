#include "lists.h"
#include <stdio.h>
/**
 * find_listint_loop - A function that finds the loop in a linked list.
 * @head: A pointer
 * Return: The address of the node where the loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr0;
	listint_t *ptr1;

	if (head == NULL)
	{
		return (NULL);
	}
	ptr1 = head->next;

	while (ptr1)
	{
		if (ptr1 == ptr1->next)
		{
			return (ptr1);
		}
		for (ptr0 = head; ptr0 != NULL; ptr0 = ptr0->next)
		{
			if (ptr0 == ptr1->next)
			{
				return (ptr1->next);
			}
		}
		ptr1 = ptr1->next;
	}
	return (head);
}
