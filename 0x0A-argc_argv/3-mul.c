#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 * @argc: Number of arguments
 * @argv: Argument vector
 */
int main(int argc, char *argv[])
{
	int prod;

	if (argc - 1 <= 1)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc - 1 == 2)
	{
		prod = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", prod);
	}
	return (0);
}
