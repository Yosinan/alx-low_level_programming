#include <stdio.h>
/**
 * main - print if the number is postive, zero, or negative
 *
 * Description: using the main function
 * this program prints "Programming is positive, zero, or negative
 * Return: 0
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'e')
		{
			if (i != 'q')
				putchar(i);
			else
				continue;
		}
		else
			continue;
	}
	putchar('\n');

	return (0);
}
