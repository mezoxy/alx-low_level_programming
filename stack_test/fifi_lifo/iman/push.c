#include "monty.h"

/**
*/

void _push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_end = NULL, *ptr = *stack;

	new_end = malloc(sizeof(stack_t));
	if (!new_end)
		printf("Error\n");
	new_end->n = atoi(array[1]);
	new_end->next = NULL;
	if (!*stack || !stack)
	{
		new_end->prev = NULL;
		*stack = new_end;
	}
	while (ptr->next)
	{
		ptr = ptr->next;
	}
	ptr->next = new_end;
	new_end->prev = ptr;
}
