#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	char ka;

	for (ch = 48 ; ch <= 57 ; ch++)
	{
		putchar(ch);
	}
	for (ka = 97 ; ka <= 102 ; ka++)
	{
		putchar(ka);
	}
	putchar('\n');
	return (0);
}
