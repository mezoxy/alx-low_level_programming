#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';
	char ff = 'A';

	for ( ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	for ( ; ff <= 'Z' ; ff++)
	{
		putchar(ff);
	}
	putchar('\n');
	return (0);
}
