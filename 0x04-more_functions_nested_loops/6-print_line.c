#include "main.h"
/**
 * print_line - prints line using _
 * @n: the number of times _ will be printed to make a    line
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int start = 1;

		while (start <= n)
		{
			_putchar('_');
			start++;
		}
		_putchar('\n');
	}
}
