#include "lists.h"
/**
 * print_listint_safe -  function that prints a linked list
 * @head: A pointer
 * Return: the number of nodes in the listthe number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tort, *har;
	size_t i = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tort = head->next;
	har = (head->next)->next;

	while (har)
	{
		if (tort == har)
		{
			tort = head;
			while (tort != har)
			{
				i++;
				tort = tort->next;
				har = har->next;
			}
			tort = tort->next;

			while (tort != har)
			{
				i++;
				tort = tort->next;
			}
			return (i);
		}
		tort = tort->next;
		har = (har->next)->next;
	}
	return (0);
}
