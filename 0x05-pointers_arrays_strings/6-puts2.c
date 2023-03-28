#include "main.h"
/**
 * puts2 - Function that prints every other character of a string
 * @str: Pointer
 */
void puts2(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		while (j % 2 == 0)
		{
			_putchar(str[j]);
			j++;
		}
	}
	_putchar('\n');
}
