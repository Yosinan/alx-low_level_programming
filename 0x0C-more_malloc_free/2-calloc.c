#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - allocates memory and initializes it to 0
 * @nmemb: input number of elements in array
 * @size: input size of the data type
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i, f;

	f = nmemb * size;
	if (nmemb <= 0 || size <= 0)
		return (NULL);

	p = malloc(f);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < (f); i++)
	{
		p[i] = 0;
	}
	return (p);
}
