#include "main.h"
/**
 * _isalpha - tests whether a character is from the English alphabet.
 * @c: character to be checked.
 * Return: 1 if the character is an English character.
 * 0 if the character is not an English character.
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = n * -1;
	_putchar((n % 10) + '0');

	return (n % 10);
}
