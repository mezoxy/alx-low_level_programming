#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int ac, char **av, char **env)
{
    int i = 0, j;
    size_t size = 0;
    pid_t p;
    char *line = NULL; // Initialize to NULL
    char *args[] = {"/bin/ls", "-l", NULL};

    while (i < 5)
    {
        write(1, "shislong$ ", 10);
        if (getline(&line, &size, stdin) == -1)
        {
            perror("Error");
            return 1; // Return an error code on failure
        }

        p = fork();
        if (p == 0)
        {
            if (strcmp(line, "ls\n") == 0) // Compare with input line
                execve("/bin/ls", args, env); // Pass the environment variables
            perror("NO COMMAND FOUND");
            exit(1); // Exit child process on error
        }
        else if (p > 0)
        {
            wait(NULL);
        }
        else
        {
            perror("Fork error");
            return 1; // Return an error code on fork failure
        }

        i++;
    }

    // Free allocated memory
    free(line);

    return 0;
}

