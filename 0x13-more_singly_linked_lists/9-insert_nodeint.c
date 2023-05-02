#include "lists.h"
/**
 * insert_nodeint_at_index - A function that inserts a new node at a position
 * @head: A pointer
 * @idx: The position of insertion
 * @n: The data
 * Return: The address of the new node add
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *apres;

	new = malloc(sizeof(listint_t));

	if (!new)
	{
		return (NULL);
	}
	else
	{
		new->n = n;
		new->next = NULL;
		apres = (*head);

		while (idx != 0)
		{
			apres = apres->next;
			idx--;
		}
		new->next = apres->next;
		apres->next = new;
		return (new);
	}
	if (idx == 0)
	{
		apres = (*head)->next;
		*head = new;
		new = apres;
		return (*head);
	}
	return (NULL);
}
