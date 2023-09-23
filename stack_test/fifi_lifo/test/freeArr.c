#include "monty.h"
/**
*/
void free_array(char **tokens)
{
	int h;

	if (!tokens)
		return;
	for (h = 0; tokens[h]; h++)
		free(tokens[h]);
	free(tokens);
}
