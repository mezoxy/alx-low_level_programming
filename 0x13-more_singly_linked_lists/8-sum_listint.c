#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - A function that calculates the sum of all n in nodes
 * @head: A pointer
 * Return: Sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
