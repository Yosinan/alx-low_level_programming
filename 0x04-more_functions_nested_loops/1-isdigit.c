#include "main.h"
/**
 * main - _isdigit() - checks if c is digit or not
 * Return 1 if c is a digit
 * Returns 0 if c is not a digit
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
