#include "main.h"
/**
 * puts_half - Prints half of a string
 * @str: Pointer
 */
void puts_half(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		j = i / 2;

		while (str[j] != '\0')
		{
			_putchar(str[j]);
			j++;
		}
	}
	else if
	{
		j = (i - 1) / 2;

		while (str[j] != '\0')
		{
			 _putchar(str[j]);
			 j++;
		}

	}
}
