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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
