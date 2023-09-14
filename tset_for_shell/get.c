#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *line = NULL;
	size_t n = 0;
	int j;
	int i = getline(&line, &n, stdin), k;

	if (i == -1)
		perror("Error");
	char **token = malloc(sizeof(char *) * i);
	if (!token)
	{
		perror("Error");
		return (-1);
	}
	token[0] = strtok(line, " \t\n");
	k = 0;
	while (!token[k])
	{
		k++;
		token[k] = strtok(NULL, " \t\n");

	}
	for (int j = 0; j < k; j++) {
		        printf("Token %d: %s\n", j, token[j]);
			    }
	free(line);
	free(token);
	return (0);
}
