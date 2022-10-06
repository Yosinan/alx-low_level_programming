#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - returns pointer which memory is allocated
 * @b: input
 * Return: output
 */
void *malloc_checked(unsigned int b)
{
	void *p = (void *)malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
