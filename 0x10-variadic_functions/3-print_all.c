#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_all - A function that prints anything
 * @format: A pointer
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *any_x, *str = "";
	va_list x;

	va_start(x, format);

		while (format[i] != '\0')
		{
			switch  (format[i])
			{
				case 'c':
					printf("%c%s", va_arg(x, int), str);
					break;
				case 'i':
					printf("%d%s", va_arg(x, int), str);
					break;
				case 'f':
					printf("%f%s", va_arg(x, double), str);
					break;
				case 's':
					any_x = va_arg(x, char *);
					if (any_x == NULL)
						any_x = "(nil)";
					printf("%s%s", any_x, str);
					break;
				default:
				break;
			}
			str = ", ";
			i++;
		}
	printf("\n");
	va_end(x);
}
