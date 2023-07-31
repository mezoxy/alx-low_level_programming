#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - A function that add a node at the end
 * @head: A pointer
 * @n: An integer
 * Return: A pointer
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *ptr1;

	ptr = malloc(sizeof(listint_t));
	if (!ptr)
	{
		return (NULL);
	}
	 ptr->n = n;
	 ptr->next = NULL;
	if (!*head)
	{
		*head = ptr;
		return (*head);
	}
	ptr1 = *head;
	while (ptr1->next)
	{
		ptr1 = ptr1->next;
	}
	ptr1->next = ptr;
	return (*head);
}
