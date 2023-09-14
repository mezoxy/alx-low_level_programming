#include "main.h"

void free_array(char **tokens)
{
	int h;

	for (h = 0; tokens[h] != NULL; h++)
    {
        free(tokens[h]);
    }
	free(tokens);
}
