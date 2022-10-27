#include "main.h"
/**
 * clear_bit - changes a bit to 0
 * @n: input integer
 * @index: input index
 * Return: 1 if sucessful
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n = *n & ~(1 << index);

	return (1);
}
