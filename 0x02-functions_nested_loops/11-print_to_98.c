#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prnts all natural numbers from n to 98
 * @n: Input
 */
void print_to_98(int n)
{
	int i = 98;

	if (n >= 98)
	{
		for ( ; i <= n; i++)
		{
			printf("%d,  ", i);
		}
	}
	else
	{
		for ( ; i >= n; i--)
		{
				printf("%d,  ", i);
		}
	}
}
