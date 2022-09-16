#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 * Return: none
 */

void print_triangle(int size)
{
	int m, c, s;

	if (size <= 0)
	{
		putchar('\n');
	}
	for (m = 0; m < size; m++)
	{
		for (c = 0; c < size; c++)
		{
			s = size - m - 1;
			if (c < s)
			{
				putchar(' ');
			}
			else
				putchar('#');
		}
		putchar('\n');
	}
}
