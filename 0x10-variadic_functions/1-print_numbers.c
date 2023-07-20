#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * followed by a new line
 *
 * @separator: string to be
 * printed between numbers
 * @n: number of integers passed
 * to the functions
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	if (n == 0)
		return;
	if (separator == NULL)
		return;
	for (i = 0; i < n - 1; i++)
	{
		printf("%d%s", va_arg(args, int), separator);
	}
	printf("%d", va_arg(args, int));
	va_end(args);
	printf("\n");
}
