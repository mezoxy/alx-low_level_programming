#include "main.h"
/**
 * _atoi - Function that convert a string to an integer
 * @s: Pointer
 * Return: 0 if there is no number else the number
 */
int _atoi(char *s)
{
	int n = 0, i = 0, sig = 1;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i]  == '-')
			sig *= -1;
		i++;
	}
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			n = n * 10 + (s[i] - '0');
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		}
		i++;
	}
	return (n * sig);
}
