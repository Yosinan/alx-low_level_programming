#include "main.h"
/**
 * print_numbers() - is used to print numbers from zero to nine 
 * it has a void return type
 * it doesnt return anything
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i + '0');
	_putchar('\n');
}
