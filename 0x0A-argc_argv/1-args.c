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

	for (i = 0; argv[i] < argv[argc]; i++)
	{
		i++;
	}
	printf("%d\n", argc - 1);
	return (0);
}
