#include <stdio.h>
#include <string.h>
int main() {
	    char str[] = "Hello                                             ";
	        char *token = strtok(str, " \t\n");
		    while (token != NULL) {
			   // token = strtok(NULL, " \t\n");
			    printf("Token: %s\n", token);
			    token = strtok(NULL, " \t\n");
							       }
		        return 0;
}
