#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Entry point
 *@s1: string 1
 *@s2: string 2
 * Return: pointer should point to a newly allocated space in memory or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int i, n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (n = 0; s2[n] != '\0'; n++)
		;
	s = (char *)malloc(i + n + 1 * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (n = 0; s2[n] != '\0'; n++)
	{
		s[i] = s2[n];
		i++;
	}

	return (s);
}
