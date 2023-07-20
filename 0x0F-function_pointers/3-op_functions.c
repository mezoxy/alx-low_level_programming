#include "3-calc.h"
#include <stdio.h>
/**
 * op_add - A function that calculates Sum
 * @a: An integer
 * @b: An integer
 * Return: Sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - A function that calculates Subtraction
 * Return: Subtraction
 * @a: An integer
 * @b: An integer
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - A function that calculates Product
 * Return: Product
 * @b: An integer
 * @a: An integer
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - A function that calculates Division
 * Return: Division
 * @a: An integer
 * @b: An integer
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - A function that calculates Remainder
 * Return: Remainder
 * @a: An integer
 * @b: An integer
 */
int op_mod(int a, int b)
{
	return (a % b);
}
