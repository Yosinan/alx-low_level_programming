#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a string in reverse 
 * @s: pointer of the input string
 * Return: none
 */
void print_rev(char *s)
{
	int len, k;

	k = 0;
	while (s[k] != '\0')
	{
		k++;
	}

	len = k;
	for (k = len -1;k >= 0; k--)
	{
		_putchar(s[k]);
	}
	_putchar('\n');
}
