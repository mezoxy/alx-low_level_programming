#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - A function that delete the first node
 * Return: the data inside the first node
 * @head: A pointer
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *ptr;

	if (!head || !(*head))
		return (0);
	data = (*head)->n;
	ptr = (*head)->next;

	free(*head);
	*head = ptr;
	return (data);
}
