#include <stdio.h>
#include "main.h"
/**
 * puts_half - executes the second half of the given string
 * @str: pointer to input string.
 * Return: Returns nothing
 */
void puts_half(char *str)
{
	int i, j, len;

	j = 0;
	while (str[j] != '\0')
	{
		j++;
	}
	len = j;
	if (len % 2 == 0)
	{
		i = len / 2;
		while (i < len)
		{
			_putchar(str[i]);
			i++;
		}
	}
	else
	{
		for (i = (len + 1) / 2; i < len; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
