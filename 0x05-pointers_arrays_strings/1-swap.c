#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps the values of two integers
 * @a: pointer of the first integer
 * @b: pointer of the second integer
 * Return: none
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
