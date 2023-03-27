#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prnts all natural numbers from n to 98
 * @n: Input
 */
void print_to_98(int n)
{
	int i;

	if (i >= 98)
	{
		while (i >= 98)
		{
			printf("%d, ", i);
			i--;
		}
	}
	else
	{
		while (i <= 98)
		{
			printf("%d, ", i);
			i++;
		}
	}
	printf("\n");
}
