#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two input strings
 * @s1: string input 1
 * @s2: string input 2
 * @n: integer input
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int m, i, f;
	char *a;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	m = 0;
	while (s1[m])
		m++;

	a = malloc(sizeof(*a) * m + n + 1);

	if (a == NULL)
		return (NULL);

	for (i = 0, f = 0; i < (m + n); i++)
	{
		if (i < m)
		{
			a[i] = s1[i];
		}
		else
		{
			a[i] = s2[f++];
		}
	}
	a[i] = '\0';

	return (a);
}
