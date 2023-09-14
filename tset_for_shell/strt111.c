#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char **parse(char *str);
void *_realloc(void *ptr, size_t size);

char **parse(char *str)
{
    char *token, **array = NULL;
    int i = 0;

    token = strtok(str, " \n\t");
    while (token != NULL)
    {
        i++;
        array = _realloc(array, (i + 1) * sizeof(char *));
        if (!array)
        {
            perror("_realloc");
            exit(EXIT_FAILURE);
        }
        array[i - 1] = strdup(token);
        token = strtok(NULL, " \n\t");
    }
    array[i] = NULL;
    return (array);
}

int main()
{
    char *line = NULL, **tokens;
    size_t i = 0;
    int j = 0, h;

    write(1, "ayoub$$ ", 8);
    if (getline(&line, &i, stdin) == -1)
    {
        perror("getline");
        exit(EXIT_FAILURE);
    }
    line[i - 1] = '\0';
    tokens = parse(line);
    while (tokens[j] != NULL)
    {
        printf("%s\n", tokens[j]);
        j++;
    }
    for (h = 0; tokens[h] != NULL; h++)
    {
        free(tokens[h]);
    }
    free(tokens);
    free(line);

    return 0;
}

void *_realloc(void *ptr, size_t size)
{
	void *new_ptr = NULL;
    if (size == 0)
    {
        free(ptr);
        return NULL;
    }

    new_ptr = malloc(size);
    if (!new_ptr)
    {
        perror("_realloc");
        exit(EXIT_FAILURE);
    }

    if (ptr)
    {
        memcpy(new_ptr, ptr, size);
        free(ptr);
    }

    return new_ptr;
}
