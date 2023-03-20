#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 48;

	for ( ; ch <= 57 ; ch++)
	{
		putchar(ch);
		if (ch != 57)
		{
			putchar(',');
			putchar('\t');
		}
		else
		{
			putchar('\n');
		}
	}
	return (0);
}
