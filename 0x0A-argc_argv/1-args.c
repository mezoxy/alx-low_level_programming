#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: Count of arguments
 * @argv: An array of pointers
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argv[argc - 1] != NULL)
	printf("%d\n", argc - 1);
	return (0);
}
