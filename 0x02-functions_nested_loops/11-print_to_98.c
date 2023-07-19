#include "main.h"

/**
 * print_to_98 - prints natural numbers
 * from n to 98
 *
 * @n: starting point
 */

void print_to_98(int n)
{
	int i, neg;

	for (i = n; i < 99; i++)
	{
		if (i < 0)
		{
			neg = -i;
			_putchar('-');
			if (neg > 9)
				_putchar('0' + neg / 10);
			_putchar('0' + neg % 10);
		}
		else if (i < 10 && i >= 0)
			_putchar('0' + i);
		else
		{
			_putchar('0' + i / 10);
			_putchar('0' + i % 10);
		}

		if (i < 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
