#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>

int main() {
    pid_t pid = fork();

    if (pid > 0)
	    printf("befor exe: HI IMANN\n");
    if (pid == 0) {
        // Child process
        char *args[] = {"my_program", NULL};
        char *envp[] = {NULL};
        
        execve("my_program", args, envp);
        
        // If execve fails, it will reach this point
        perror("execve");
    } else if (pid > 0) {
        // Parent process
        wait(NULL);
        printf("Child process has completed.\n");
    } else {
        perror("fork");
    }
    
    return 0;
}

