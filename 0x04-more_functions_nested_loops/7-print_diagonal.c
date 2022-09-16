#include <stdio.h>
#include "main.h"

/**
* print_diagonal - prints diagonal line on the terminal
*@n: numbers of lines and columns
* Return: none
**/

void print_diagonal(int n)
{
	int p, c;

	for (p = 0; p < n; p++)
	{
		for (c = 0; c <= p; c++)
		{
			if (c != p)
			{
				putchar(' ');
			}
			else
			{
				putchar('\\');
			}

		}
		putchar('\n');
	}
	if (n <= 0)
		putchar('\n');
}
