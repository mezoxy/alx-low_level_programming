#include "lists.h"
#include <stdio.h>
/**
 * free_listint_safe - A  function that frees a listint_t list
 * @h: A pointer to a pointer
 * Return: The size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	int moins;
	listint_t *ptr;

	if (h == NULL || (*h) == NULL)
	{
		return (0);
	}
	while (*h)
	{
		moins = *h - (*h)->next;
		if (moins > 0)
		{
			ptr = (*h)->next;
			free(*h);
			*h = ptr;
			i++;
		}
		else
		{
			free(*h);
			*h = NULL;
			i++;
			break;
		}
	}

	*h = NULL;

	return (i);
}
