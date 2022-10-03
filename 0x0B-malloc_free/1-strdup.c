#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Entry point
 *@str: input string
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *_strdup(char *str)
{
	char *sout;
	unsigned int i;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	sout = (char *)malloc(i + 1 * sizeof(char));
	if (sout != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			sout[i] = str[i];
		return (sout);
	}

	return (NULL);
}
