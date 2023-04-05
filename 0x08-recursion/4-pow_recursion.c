#include "main.h"
/**
 * _pow_recursion - A function that calcultes x to the power of y
 * @x: Base
 * @y: power
 * Return: x to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y <= 0)
	{
		if (y == 0)
		{
			return (1);
		}
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
