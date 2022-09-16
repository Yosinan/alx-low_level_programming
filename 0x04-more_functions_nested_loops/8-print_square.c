#include "main.h"
#include <stdio.h>
/**
 * print_square - prints square using #
 * @size: size of square
 * Return: none
 *
 */
void print_square(int size)
{
	if (size > 0)
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				putchar('#');
			putchar('\n');
		}
	}
	else
		putchar('\n');
}
