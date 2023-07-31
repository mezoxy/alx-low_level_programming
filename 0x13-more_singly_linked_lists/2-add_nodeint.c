#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - A function that add node at the biginningof a list
 * @head: A pointer
 * @n: An integer
 * Return: A pointer
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = NULL;

	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);
	ptr->next = (*head);
	*head = ptr;
	(*head)->n = n;
	return (*head);

}
