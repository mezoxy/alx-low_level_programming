#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main() {
	    char *args[] = { "echo", "Hello, execve!", NULL };
	        char *env[] = { "MY_ENV_VARIABLE=Hello from env", NULL };
		    if (execve("/bin/echo", args, env) == -1) {
			            perror("execve");
				        }
		        return 0;
}
