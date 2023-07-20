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
	int arg;

	va_start(args, n);
	if (n == 0)
	{
		va_end(args);
		return;
	}
	for (i = 0; i < n; i++)
	{
		arg = va_arg(args, int);
		printf("%d", arg);

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
