#include "main.h"
/**
 * set_string - A  function that sets the value of a pointer to a char.
 * @s: A pointer to a pointer
 * @to: pointer
 */
void set_string(char **s, char *to)
{
	*s = to;
}
