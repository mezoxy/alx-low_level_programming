#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - A function that calculate x raised to y
 * @x: Base
 * @y: Power
 * Return: An integer x to the power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (_pow_recursion(x, y - 1) * x);

}
