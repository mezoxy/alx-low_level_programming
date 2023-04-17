#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point
 * Return: Always 0 success
 */
int main(void)
{
	int i;
	char *nm = __FILE__;

	for (i = 0; nm[i] != '\0'; i++)
	{
		_putchar(nm[i]);
	}
	_putchar('\n');
	return (0);
}
