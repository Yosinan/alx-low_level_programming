#include "main.h"
/**
* print_chessboard - a function that prints the chessboard
* @a: dimensional array
**/

void print_chessboard(char (*a)[8])
{
	int l;
	int j;

	for (l = 0; l < 8; l++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[l][j]);
		}
		_putchar('\n');
	}
}
