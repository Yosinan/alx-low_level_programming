#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - create integer array
 * @min: minimum integer input
 * @max: maximum integer input
 * Return: the new created pointer
 */
int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
		return (NULL);
	p = (int *)malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		p[i] = min++;

	return (p);
}
