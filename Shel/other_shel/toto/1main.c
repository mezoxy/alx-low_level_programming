#include "main.h"

int main(int argc, char **argv) {
    (void)argc;  // To suppress unused parameter warning

    while (1) {
        if (isatty(STDIN_FILENO)) {
            write(STDOUT_FILENO, "ayb_iman$$ ", 11);
        }

        char *line = NULL;
        size_t len = 0;
        ssize_t read = getline(&line, &len, stdin);
        if (read == -1) {
            free(line);
            exit(EXIT_FAILURE);
        }

        char **tokens = parse(line);
        if (!tokens || !tokens[0]) {
            free(line);
            free_array(tokens);
            continue;
        }

        pid_t pid = fork();
        if (pid < 0) {
            perror("fork");
            free(line);
            free_array(tokens);
            exit(errno);
        } else if (pid == 0) {
            if (execve(tokens[0], tokens, environ) == -1) {
                perror(argv[0]);
                free(line);
                free_array(tokens);
                exit(EXIT_FAILURE);
            }
        } else {
            wait(NULL);
            free(line);
            free_array(tokens);
        }
    }

    return 0;
}

void free_array(char **tokens) {
    for (int h = 0; tokens[h] != NULL; h++) {
        free(tokens[h]);
    }
    free(tokens);
}

char **parse(char *str) {
    char *token;
    char **array = NULL;
    int i = 0;
    int array_size = 2;

    array = malloc(sizeof(char *) * array_size);
    if (!array) {
        return NULL;
    }

    token = strtok(str, " \n\t");
    while (token != NULL) {
        if (i >= array_size) {
            array_size *= 2;
            array = _realloc(array, sizeof(char *) * array_size);
            if (!array) {
                return NULL;
            }
        }
        
        array[i] = strdup(token);
        if (!array[i]) {
            return NULL;
        }

        token = strtok(NULL, " \n\t");
        i++;
    }
    array[i] = NULL;

    return array;
}

char **_realloc(char **ptr, size_t size) {
    char **new_ptr = NULL;
    size_t old_size = 0;

    if (ptr) {
        while (ptr[old_size] != NULL) {
            old_size++;
        }
    }

    if (size == 0) {
        free(ptr);
        return NULL;
    }

    new_ptr = malloc(size);
    if (!new_ptr) {
        return NULL;
    }

    if (ptr) {
        size_t copy_size = sizeof(char *) * old_size;
        memcpy(new_ptr, ptr, copy_size);
        free(ptr);
    }
    return new_ptr;
}

