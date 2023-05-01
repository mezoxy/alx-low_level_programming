#include "lists.h"
/**
 * add_nodeint_end - A function that Add a node at the end
 * Return: Address
 * @head: A pointer
 * @n: An integer
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = (*head);
	listint_t *last_node = malloc(sizeof(listint_t));

	if (last_node == NULL)
	{
		return (NULL);
	}
	else
	{
	last_node->n = n;
	}
	if (*head == NULL)
	{
		*head = last_node;
		return (*head);
	}
	while (ptr->next)
	{
		ptr = ptr->next;
	}
	ptr->next = last_node;
	last_node = NULL;
	return (*head);
}
