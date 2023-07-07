#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 * @argc: Count of arguments
 * @argv: An array of pointers
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%ld\n", strtol(argv[1], NULL, 10) * strtol(argv[2], NULL, 10));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
