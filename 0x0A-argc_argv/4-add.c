#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: Count of arguments
 * @argv: An array of pointers
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;
	long int sum = 0;

	for (i = 1; i < argc; i++)
	{
		int j = 0;

		while (argv[i][j] != '\0')
		{
		if (!isdigit(argv[i][j]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += strtol(argv[i], NULL, 10);
		}
		j++;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
