#include <stdio.h>
#include "main.h"
/**
 * *_strcat - concate two given strings
 * @dest: pointer to the input string
 * @src: pointer to the input string
 * Return: Returns the concated string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
