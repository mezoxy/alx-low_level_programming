#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
/**
 */
int main(int argc, char **argv)
{
	*argv++;

	while (*argv)
	{
		printf("%s ", *argv);
		*argv++;
	}
	putchar('\n');
	return (0);
}
