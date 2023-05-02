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
	listint_t *new, *apres = *head;
	unsigned int i;

	new = malloc(sizeof(listint_t));

	if (!new || !(*head))
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (i = 0; i < idx && apres; i++)
	{
		if (i == idx - 1)
		{
			new->next = apres->next;
			apres->next = new;
			return (new);
		}
		else
			apres = apres->next;
	}
	return (NULL);
}
