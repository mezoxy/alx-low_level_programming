#include "main.h"

char **parse(char *str)
{
    char *token, **array = NULL;
    int i = 0;

    token = strtok(str, " \n\t");
    array = malloc(sizeof(char *) * 2);
    array[i] = token;
    i++;
    while (token != NULL)
    {
        array = _realloc(array, (i + 1) * sizeof(char *));
        if (!array)
        {
            return (NULL);
        }
        array[i - 1] = strdup(token);
        token = strtok(NULL, " \n\t");
	i++;
    }
    array[i] = NULL;
    return (array);
}
