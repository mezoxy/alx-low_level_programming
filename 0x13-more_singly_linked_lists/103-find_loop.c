#include "lists.h"
#include <stdio.h>
/**
 * find_listint_loop - A function that finds the loop in a linked list.
 * @head: A pointer
 * Return: The address of the node where the loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr0 = head, *ptr1 = head;

	if (head == NULL)
	{
		return (NULL);
	}
	while (ptr1 && ptr0 && ptr1->next)
	{
		ptr1 = ptr1->next->next;
		ptr0 = ptr0->next;

		if (ptr1 == ptr0)
		{
			ptr0 = head;
			while (ptr0 != ptr1)
			{
				ptr0 = ptr0->next;
				ptr1 = ptr1->next;
			}
			return (ptr1);
		}
	}
	return (NULL);
}
