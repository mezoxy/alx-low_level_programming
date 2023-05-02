#include "lists.h"
/**
 * sum_listint - A function that calculates sum
 * @head: A pointer
 * Return: Sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr;

	if (!head)
		return (0);
	ptr = head;
	
	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
