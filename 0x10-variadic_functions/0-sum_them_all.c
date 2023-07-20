#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all arguments
 *
 * @n: number of arguments
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int total = 0;
	unsigned int i;
	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		total += va_arg(args, int);
	}
	return (total);
}
