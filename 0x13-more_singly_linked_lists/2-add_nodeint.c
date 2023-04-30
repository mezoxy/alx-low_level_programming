#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_nodeint - A function that adds a new node at the beginning
 * Return: The address of the new element, or NULL if it failed
 * @head: A pointer to a pointer
 * @n: An integer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *head1 = malloc(sizeof(listint_t));

	if (!head1)
	{
		return (NULL);
	}
	else
	{
		head1->n = n;
		head1->next = (*head)->next;
		*head = head1;
	}
	return (*head);
}
