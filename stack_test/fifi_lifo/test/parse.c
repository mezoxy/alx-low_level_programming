#include "monty.h"
/**
*/
char **parse(char *str)
{
	char *token = NULL, **array = NULL, *line1 = NULL;
	int i = 0, array_size;

	line1 = _strdup(str);
	array_size = count(line1);
	free(line1);
	array = malloc(sizeof(char *) * (array_size + 1));
	if (!array)
	{ free(str);
		return (NULL); }
	token = strtok(str, " \n\t");
	while (token)
	{
		array[i] = _strdup(token);
		if (!array[i])
		{
			free(str);
			free_array(array);
			return (NULL); }

		token = strtok(NULL, " \n\t");
		i++; }
	array[i] = (NULL);
	return (array);
}
