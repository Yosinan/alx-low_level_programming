#include "main.h"
#include <stdlib.h>
/**
 * create_array - Entry point
 *@size: size of the array
 *@c: character
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ch = (char *)malloc(size * sizeof(char));
	if (ch != NULL)
	{
		for (i = 0; i < size; i++)
			ch[i] = c;

		return (ch);
	}

	return (NULL);
}
