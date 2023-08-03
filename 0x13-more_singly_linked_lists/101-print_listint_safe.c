#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stddef.h>
/**
 */

size_t print_listint_safe(const listint_t *head)
{
	unsigned int i = 0;
	const listint_t *ptr = head, *ptr1 = head;

	if (!head)
		exit(98);
	while (!ptr1 && !ptr1->next)
	{
		printf("[0x%p] %d\n", (void *)ptr, ptr->n);
		i++;
		ptr = ptr->next;
		ptr1 = ptr1->next->next;
		if (ptr == ptr1)
			break;
	}
	return (i);
}
