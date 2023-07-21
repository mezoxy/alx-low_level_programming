#include "variadic_functions.h"
#include <stdio.h>
void print_all(const char * const format, ...)
{
	const char *ptr = format;

	if (ptr)
	{
		while (*ptr != '\0')
		{
			printf("%s", ptr);
			ptr++;
		}
	}
	printf("\n");
}
