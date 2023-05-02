#include "lists.h"
/**
 * reverse_listint - function that reverses a linked list
 * @head: A pointer
 * Return: A pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pre = NULL;
	listint_t *cur = NULL;

	while (*head)
	{
		cur = (*head)->next;
		(*head)->next = pre;
		pre = *head;
		*head = cur;
	}
	*head = pre;
	return (*head);
}
