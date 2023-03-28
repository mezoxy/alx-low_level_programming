#include "main.h"
/**
 * rev_string - Function that reverses a string
 * @s: Pointer
 */
void rev_string(char *s)
{
	int n = 0;
	int i;

	while (s[n] != '\0')
	{
		n++;
	}
	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
