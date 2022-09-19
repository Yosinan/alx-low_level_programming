#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverses a string
 * @s: pointer of the input string
 * Return: none
 */
void rev_string(char *s)
{
	int len, i, k, j, temp;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	len = i;
	j = len - 1;
	for (i = len -1; i >= 0 && j >0; i--)
	{
		k = i -j;
		temp = s[k];
		s[j] = s[i];
		s[i] = temp;
		j = j-2;
	}
}
