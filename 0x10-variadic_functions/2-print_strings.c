#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_strings - prints strings in
 * variadic functions
 *
 * @separator: string that separtates
 * each string
 * @n: number of strings passed into
 * the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *arg_s;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		arg_s = va_arg(args, char*);
		if (arg_s == NULL)
			printf("(nil)");
		else
			printf("%s", arg_s);

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
