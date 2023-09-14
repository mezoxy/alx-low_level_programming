#include "lists.h"

/**
 * sum_dlistint - A function
 * @head: A pointer
 * Return: Sum of n
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *p = head;

	while (p)
	{
		sum += p->n;
		p = p->next;
	}
	return (sum);
}
