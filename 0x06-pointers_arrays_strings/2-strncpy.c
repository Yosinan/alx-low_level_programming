#include <stdio.h>
#include "main.h"
/**
 * _strncpy - copies a string up to n
 * @dest: Destination of the pointer to the string
 * @src: Source of the pointer to the string to copy
 * @n: Number of bytes to copy.
 * Return: Pointer to the destination string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int k;

	for (k = 0; src[k] != '\0' && k < n; k++)
		dest[k]	= src[k];
	while (k < n)
		dest[k++] = '\0';

	return (dest);
}
