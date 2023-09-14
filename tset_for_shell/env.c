#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

char *_getenv(const char *name)
{
	int i;
	extern char **environ;
	char *cp_env;

	for (i = 0; environ[i] != NULL; i++)
	{
		cp_env = strtok(environ[i], "=");
		if (strcmp(cp_env, name) == 0)
			return (strtok(NULL, "="));
	}
	return (NULL);
}
int main()
{
	printf("%s\n", _getenv(copy));
	return (0);
}
