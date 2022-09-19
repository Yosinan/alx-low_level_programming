#include "main.h"
#include <stdio.h>
/**
 * _strlen - it returns the length of a string
 * @s: pointer of the input string
 * Return: integer length
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
