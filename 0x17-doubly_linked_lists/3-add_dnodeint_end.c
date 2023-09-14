#include "lists.h"

/**
 * add_dnodeint_end - A function
 * @head: A pointer
 * @n: A data
 * Return: A pointer
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_end = NULL, *ptr = *head;

	new_end = malloc(sizeof(dlistint_t));
	if (!new_end)
		return (NULL);
	new_end->n = n;
	new_end->next = NULL;
	if (!*head)
	{
		new_end->prev = NULL;
		*head = new_end;
		return (*head);
	}
	while (ptr->next)
	{
		ptr = ptr->next;
	}
	ptr->next = new_end;
	new_end->prev = ptr;
	return (*head);
}
