#include "main.h"
/**
 * binary_to_uint - changes decimal to binary
 * @b: input string of 0 and 1
 * Return: binary number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, base = 0;

	if (b == NULL)
		return (0);
	for (i = 0 ; b[i] ; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		base = base * 2 + b[i] - '0';
	}
	return (base);
}
