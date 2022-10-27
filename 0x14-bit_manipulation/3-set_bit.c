#include "main.h"
/**
 * set_bit - set a certain bit to one
 * @n: input integer
 * @index: input index
 * Return: 1 if it works and -1 if it doesnt work
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n = *n | 1 << index;
	return (1);
}
