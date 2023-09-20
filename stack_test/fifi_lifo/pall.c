#include "monty.h"
/**
 */
void pall(stack_t **stack)
{
	stack_t *tmp = *stack;

	if (!stack)
		return;
	if (tmp->next)
		while (tmp->next)
			tmp = tmp->next;
	while(tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->prev;
	}
}
