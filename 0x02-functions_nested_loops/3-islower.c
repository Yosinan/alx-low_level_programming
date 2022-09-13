#include "main.h"
/**
 * _islower - tests whether a character from the English alphabet is lowercase.
 * @c: character to be checked.
 * Return: 1 if the character is an lowercase English character.
 * 0 if the character is not a lowercase English character.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
