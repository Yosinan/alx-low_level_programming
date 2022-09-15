#include "main.h"
/**
 * main - checks if c is uppercase or not
 * Return 1 if c is uppercase
 * Return 0 if c isn't uppercase/is lowercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
