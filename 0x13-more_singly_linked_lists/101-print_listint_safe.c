#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - A function that prints a linked list.
 * @head: A pointer.
 * Return: the number of nodes in the listthe number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *t, *h;
	size_t i = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	t = head->next;
	h = head->next->next;

	while (h)
	{
		if (t == h)
		{
			t = h;
			while (t != h)
			{
				i++;
				t = t->next;
				h = h->next;
			}
			while (t != h)
			{
				i++;
				t = t->next;
			}
			return (i);
		}
		t = t->next;
		h = h->next->next;
	}
	return (0);
}
