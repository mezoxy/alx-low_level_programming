#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i + '0');
			putchar((i != 8) ? (j + '0') : (j + '0'));
			if (i != 8)
			{
				putchar(',');
				putchar(' ');
			}
			else
			{
				putchar('\n');
			}

		}
	}
	return (0);
}
