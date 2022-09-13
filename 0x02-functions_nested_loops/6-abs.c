#include "main.h"
/**
 * _abs - returns the absolute value of a given number
 * @n: number to be checked.
 * Return: absolute value of n
 *
 */
int _abs(int n)
{
	if (n < 0)
		n = n * (-1);
	
	return (n);
}
