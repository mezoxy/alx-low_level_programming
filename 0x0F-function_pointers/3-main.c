#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: A string
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];

	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	if (!get_op_func(op))
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);
}
