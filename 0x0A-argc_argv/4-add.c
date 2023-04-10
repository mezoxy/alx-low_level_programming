nclude <stdio.h>
#include <stdlib.h>
/**
 *  * main - Entry point
 *   * Return: Always 0 (Success)
 *    * @argc: Number of arguments
 *     * @argv: Argument vector
 *      */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

        for (i = 1; i < argc; i++)
	{
		sum = sum + atoi(argv[i]);
	}
	if (argc > 1)
	{
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
