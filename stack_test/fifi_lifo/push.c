#include "monty.h"
/**
*/
stack_t *push(stack_t **stack, int n)
{
	stack_t *new_end = NULL, *ptr = *stack;

	new_end = malloc(sizeof(stack_t));
	if (!new_end)
		p_er("Error: malloc failed");
	new_end->n = n;
	new_end->next = NULL;
	if (!*stack)
	{
		new_end->prev = NULL;
		*stack = new_end;
		return (new_end);
	}
	while (ptr->next)
	{
		ptr = ptr->next;
	}
	ptr->next = new_end;
	new_end->prev = ptr;
	return (new_end);
}
/**
 */

void p_er(char *str)
{
	fprintf(stderr, "%s\n", str);
	exit(EXIT_FAILURE);
}
