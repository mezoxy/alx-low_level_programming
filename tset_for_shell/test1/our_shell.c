: An array of pointers
 */

char **parse(char *line)
{
	int size = 64, i = 0;
	char *token;
	char **arr = malloc(size * sizeof(*arr));

	if (arr == NULL)
	{
		perror("Memory reallocation error");
		exit(EXIT_FAILURE);
	}

	token = strtok(line, " \t\n");

	while (!token)
	{
		arr[i] = token;
		i++;

		if (i >= size)
		{
			size *= 2;
			arr = realloc(arr, size * sizeof(*arr));
			if (!arr)
			{
				perror("Memory reallocation error");
				exit(EXIT_FAILURE);
			}
		}
		token = strtok(NULL, " \t\n");
	}
	arr[i] = NULL;
	return (arr);
}
/**
 * exec_built_in_com - A function tha execute the built_in command
 * @args: A pointer
 * Return: An int
 */

int exec_built_in_com(char **args)
{
	size_t i;
	char *my_functions[3] = {"cd", "exit", "env"};
	int (*my_function[3])(char **) = {&cd_fun, &exit_fun, &env_fun};

	if (!args[0])
	{
		return (-1);
	}
	i = 0;
	while (i < sizeof(my_functions) / sizeof(char *))
	{
		if (strcmp(args[0], my_functions[i]) == 0)
		{
			return ((*my_function[i]))(args);
		}
		i++;
	}
	return (execve_fun(args));
}

/**
 * execve_fun - A function that execute the non built_in command
 * @args: A pointer
 * Return: An int
 */

int execve_fun(char **args)
{
	pid_t p;
	int j;

	p =fork();
	if (p < 0)
		perror("Error");
	if (p == 0)
	{

		if (execve(args[0], args, environ) == -1)
		{
			perror("error in new_process");
			exit(EXIT_FAILURE);
		}
	}
	if (p < 0)
		perror("error in new_process");
	do {
		waitpid(p, &j, WUNTRACED);
	} while (!WIFEXITED(j) && !WIFSIGNALED(j));
	return (-1);
}
