#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints the parameters
 * @separator: constant input string
 * @n: integer parameter
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list app;

	va_start(app, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(app, int));
		if (i != n - 1 && separator)
			printf("%s", separator);
	}

	va_end(app);
	printf("\n");
}
