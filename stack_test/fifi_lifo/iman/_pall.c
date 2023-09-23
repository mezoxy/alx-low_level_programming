#include "monty.h"

/**
 */

void _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr = *stack;

	if (!stack || !*stack)
		return;
	while (ptr->next)
		ptr = ptr->next;
	while (ptr)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->prev; }
}
