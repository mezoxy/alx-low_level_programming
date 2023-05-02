#include "lists.h"
/**
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp;

	if (*head != NULL)
	{
	temp = *head->next;
	}
	if (temp)
	{
		if (index != i)
		{
			temp = temp->next;
			i++;
		}
		free(temp);
		return (1);
	}
	return (-1);
}
