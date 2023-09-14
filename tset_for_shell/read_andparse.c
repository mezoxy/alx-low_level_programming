#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void)
{
	char *line;
	int i, k;
	size_t n = 0;
	char *str[10];
	char *command[] = {"exec", NULL};

	while (1 > 0)
	{
	printf("AybImnShell$ ");
	i = getline(&line, &n, stdin);
	if (i == -1)
		perror("ERROR");

	str[0] =  strtok(line, " \t\n");
	if (strcmp(str[0], "/bin/ls") == 0)
	{
		k = fork();
		if (k == 0)
		{
			execve("exec", command, NULL);
		}
		printf("./read: No such file or directory\n");
		wait(NULL);
	}

	//j = 1;
	/**while (str != NULL)
	{
	//	printf("STR: %s\n", str);
		str[j] = strtok(NULL, " \t\n");
	}*/
	}
	free(line);
	return (0);
}
