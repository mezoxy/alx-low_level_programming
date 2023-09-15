#include "main.h"

int main(int ac, char **av)
{
    char *line = NULL, **tokens;
    size_t i = 0;
    pid_t pid;

    (void)ac;
    while(1)
    {
	if (isatty(0) == 1)
		write(1, "ayoub$$ ", 8);
	if (getline(&line, &i, stdin) == -1)
    	{
		free(line);
       		exit(EXIT_FAILURE);
    	}
	tokens = parse(line);
	if (!tokens[0] || !tokens)
	{
		free(line), free_array(tokens);
		continue;
    	}
	pid = fork();
	if (pid < 0)
	{
		free(line), free_array(tokens);
		exit(errno);
	}
	if (pid == 0)
	{
		if (execve(tokens[0], tokens, environ) == -1)
		{
			perror(av[0]);
			return (0);
		}
	}
	else
	{
		wait(NULL);
		/*free(line), free_array(tokens);*/
	}
    }
	return (0);
}