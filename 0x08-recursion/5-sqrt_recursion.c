#include "main.h"
/**
 * _sqrt_recursion - A function that calculate the square root of a number
 * @n: Input (number)
 * Return: Root of number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (SQUAR_root(n, 0));
}
/**
* SQUAR_root - A function that determine root
* Return: Root
* @n: Input
* @root: integer
*/
int SQUAR_root(int n, int root)
{
	int k;

	if (root * root == n)
	{
		k = root;
	}
	else if (root * root < n)
	{
		return (SQUAR(n, root + 1));
	}
	else
	{
		k = -1;
	}
	return (k);
}
