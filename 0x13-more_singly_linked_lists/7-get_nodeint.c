#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the nth node
 * @head: A pointer
 * @index: Position
 * Return: A pointer
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	/*listint_t *ptr;*/

	while (head)
	{
		if (x == index)
		{
			return (head);
		}
		head = head->next;
		x++;
	}
	return (NULL);
}
