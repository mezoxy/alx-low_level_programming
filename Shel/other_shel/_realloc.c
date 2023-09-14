#include "main.h"
char **_realloc(char **ptr, size_t size)
{
    char **new_ptr = NULL;
    size_t old_size = 0;

    if (ptr)
    {
        while (ptr[old_size] != NULL)
        {
            old_size++;
        }
    }

    if (size == 0)
    {
        free(ptr);
        return NULL;
    }

    new_ptr = malloc(size);
    if (!new_ptr)
    {
        return NULL;
    }

    if (ptr)
    {
        size_t copy_size = sizeof(char *) * old_size;

        memcpy(new_ptr, ptr, copy_size);

        free(ptr);
    }
    return new_ptr;
}

