#include "main.h"
/**
 * string_toupper - Function that changes all lowercase to uppercase
 * @stg: String
 * Return: Uppercase letters
 */
char *string_toupper(char *stg)
{
	int i;

	for (i = 0; stg[i] != '\0'; i++)
	{
		if (stg[i] >= 97 && stg[i] <= 122)
		{
			stg[i] = stg[i] - 32;
		}
	}
	return (stg);
}
