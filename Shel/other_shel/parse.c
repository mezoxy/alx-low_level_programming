#include "main.h"

char **parse(char *str)
{
    char *token, **array = NULL;
    int i = 0;
    int array_size = 2;

    array = malloc(sizeof(char *) * array_size);
    if (!array)
    {
        return NULL;
    }

    token = strtok(str, " \n\t");
    while (token != NULL)
    {
        if (i >= array_size)
        {
            array_size *= 2;
            array = _realloc(array, sizeof(char *) * array_size);
            if (!array)
            {
                return NULL;
            }
        }
        
        array[i] = strdup(token);
        if (!array[i])
        {
            return NULL;
        }

        token = strtok(NULL, " \n\t");
        i++;
    }
    array[i] = NULL;

    return array;
}
