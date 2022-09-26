#include "main.h"
/**
 * _memcpy - copies n byte from src to dest.
 * @dest: source string
 * @src: the contant byte for filling
 * @n: lenght of buffer
 * Return: new string.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
