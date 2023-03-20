#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = '0';

	for ( ; ch <= '9' ; ch++)
	{
		putchar(ch);
		if (ch != '9')
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
