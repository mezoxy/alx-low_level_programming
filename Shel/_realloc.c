#include "main.h"

char **_realloc(char **ptr, size_t size)
{
        char **new_ptr = NULL;
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
        memcpy(new_ptr, ptr, size);
        free(ptr);
    }

    return new_ptr;
}
