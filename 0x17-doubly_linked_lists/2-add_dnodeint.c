#include "lists.h"

/**
 * add_dnodeint - A function that add  a node at the index 0
 * @head: A pointer
 * @n: Data to insert
 * Return: A pointer
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	return (*head);
}
