#include "lists.h"
#include <stdio.h>
/**
 * print_listint_safe - A function that prints a linked list.
 * @head: A pointer.
 * Return: Number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i, j = 0;

	i = nmbr_uniqu(head);

	if (i == 0)
	{
		for (; head != NULL; i++)
		{
			printf("[%p] %d\n", (void *)head, (head->n));
			head = head->next;
		}
	}
	else
	{
		for (; j < i; j++)
		{
			printf("[%p] %d\n", (void *)head, (head->n));
			head = head->next;
		}
		printf("->[%p] %d\n", (void *)head, (head->n));
	}
	return (i);
}
/**
 * nmbr_uniqu - A function that counts
 * @head: A pointer
 * Return: 0 if it's not
 */
size_t nmbr_uniqu(const listint_t *head)
{
	const listint_t *t, *h;
	size_t i = 1;

	if (head == NULL || head->next == NULL)
	{
		return (0);
	}
	t = head->next;
	h = head->next->next;

	while (h)
	{
		if (t == h)
		{
			t = head;
			while (t != h)
			{
				i++;
				t = t->next;
				h = h->next;
			}
			t = t->next;

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
