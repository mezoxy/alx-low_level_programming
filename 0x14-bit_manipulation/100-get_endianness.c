#include "main.h"

/**
 * get_endianness - A function that checks the endianness.
 * Return: 0 if big-endian else 1
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *ptr;

	ptr = (char *)&i;

	return ((int) *ptr);
}
