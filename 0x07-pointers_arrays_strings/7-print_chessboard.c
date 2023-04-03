#include "main.h"
/**
 * print_chessboard - A function that print the chessbord
 * @a: String
 */
void print_chessboard(char (*a)[8])
{
	int j;
	int i;

	for (i =0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
