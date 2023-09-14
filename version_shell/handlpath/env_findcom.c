#include "shell.h"

/**
 */
char  *fun4env(char *name)
{
	char *nom = NULL;
	int i = 0;

	while (environ[i])
	{
		nom = strtok(environ[i], "=");
		if (ncompare(name, nom, _strlen(name)) == 0)
			return (strtok(NULL, "\n"));
		i++;
	}
	return (NULL);
}

/**
 */

char *com(char *name)
{
	char *token = NULL, *path = fun4env("PATH"), *sub_path = NULL;
	struct stat s;

	token = strtok(path, ":");
	while (token)
	{
		sub_path = _strdup(token);
		strcat(sub_path, "/"), strcat(sub_path, name);
		if (stat(sub_path, &s) == 0)
			return (sub_path);
		free(sub_path);
		token = strtok(NULL, ":");
	}
	return (NULL);
}
