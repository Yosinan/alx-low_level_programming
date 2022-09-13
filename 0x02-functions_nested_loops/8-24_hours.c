#include "main.h"
/**
 * _isalpha - tests whether a character is from the English alphabet.
 * @c: character to be checked.
 * Return: 1 if the character is an English character.
 * 0 if the character is not an English character.
 */
void jack_bauer(void)
{
	
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
