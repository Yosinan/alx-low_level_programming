#include "main.h"
/**
 * flip_bits - flips from one number to another
 * @n: value 1
 * @m: value 2
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip, xor;

	xor = n ^ m;

	flip = 0;

	while (xor != 0)
	{
		if ((xor & 1) == 1)
		{
			flip++;
		}
		xor = xor >> 1;
	}
	return (flip);
}
