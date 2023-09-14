#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <stdlib.h>
/**
 * This function will prints shell$ and reads a command from the user 
 * and print it again on the next line
 */
int main(int argc, char *argv[], char *env[])
{
	char *line = NULL;
	size_t i = 0, j;

	while (2)
	{
	printf("shell$ ");
	j = (int)getline(&line, &i, stdin);
	if (j == -1)
		perror("ERROR");
	printf("shell$ %s", line);
	}
	free(line);
	return (0);
}
