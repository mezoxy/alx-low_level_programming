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
	int sum = 0;
	char *c;

	for (i = 1; i < argc; i++)
	{
		c = argv[i];

		if (*c < '0' || *c > '9')
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
