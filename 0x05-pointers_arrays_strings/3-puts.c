#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string followed by a new line
 * @str: pointer of the input string
 * Return: none
 */
void _puts(char *str)
{
	int j;

	j = 0;
	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
