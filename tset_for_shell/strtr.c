#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
char  **parse(char *str);


char  **parse(char *str)
{
	char *token, **array = NULL;
	int i = 0;

	token = strtok(str, " \n\t");
	while (token != NULL)
	{
		i++;
		array = realloc(array, i * sizeof(char *));
		if (!array)
		{
			perror("_realloc");
			exit(EXIT_FAILURE);
		}
		array[i - 1] = token;
		token = strtok(NULL, " \n\t");
	}
	array[i] = NULL;
	return (array);
}
int main()
{
	char *line = NULL, **tokens;
	size_t i = 0, k;
	int j = 0;

	write(1, "ayoub$$ ", 8);
	k = getline(&line, &i, stdin);
	if (getline(&line, &i, stdin) == -1)
	{
		perror("getline");
		exit(EXIT_FAILURE);
	}
	line[k - 1] = '\0';
	tokens = parse(line);
	while (tokens[j])
	{
		printf("%s\n", tokens[j]);
		j++;
	}
	return (0);
}
