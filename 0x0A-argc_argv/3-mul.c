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
	int i;
	int prod = 1;

	for (i = 1; i < argc; i++)
	{
		prod = prod * atol(argv[i]);
	}
	if (argc - 1 == 0)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", prod);
	}
	return (0);
}
