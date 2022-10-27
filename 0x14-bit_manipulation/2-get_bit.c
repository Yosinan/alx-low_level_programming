#include "main.h"
/**
 * get_bit - returns bit according to index
 * @n: input integer
 * @index: input index
 * Return: bit on index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	else
	{
		return (n >> index & 1);
	}
}
