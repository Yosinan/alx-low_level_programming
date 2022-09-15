#include "main.h"
/**
 * more_numbers() - used to print from 0 to 9 10 times
 *
 * its return type is 0
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
			_putchar(j + '0');
		_putchar('\n');
	}
}
