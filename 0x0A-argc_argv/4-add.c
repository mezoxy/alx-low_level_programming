#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 * @argc: Number of arguments
 * @argv: Argument vector
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!isdigit(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + atoi(argv[i]);
	}
	if (argc == 1)
	{
		printf("0\n");
	}
	else
	printf("%d\n", sum);
	return (0);
}
