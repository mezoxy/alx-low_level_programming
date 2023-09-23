#include "monty.h"
/**
*/
char **parse(char *str)
{
	char **array = malloc(2 * sizeof(char *));
	if (!array) {
		perror("Error: malloc failed");
		exit(EXIT_FAILURE);
	}

	array[0] = NULL;
	array[1] = NULL;

	char *token = strtok(str, " \n\t");
	int i = 0;

	while (token != NULL && i < 2) {
		array[i] = strdup(token);
		if (!array[i]) {
			perror("Error: strdup failed");
			exit(EXIT_FAILURE);
		}
		token = strtok(NULL, " \n\t");
		i++;
	}
	return array;
}
