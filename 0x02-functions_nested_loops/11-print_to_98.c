#include <stdio.h>
#include "main.h"
/**
 * times_table - prints the times table from 0 - 9.
 * 
 * Return: Nothing.
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
			printf("%d, ", n);
		printf("%d\n", 98);
	}
	else if (n == 98)
		printf("%d\n", n);
	else
	{
		for (n = n; n > 98; n--)
			printf("%d, ", n);
		printf("%d\n", 98);
	}
}
