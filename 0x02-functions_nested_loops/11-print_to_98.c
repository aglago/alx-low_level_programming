#include "main.h"

/**
 * print_to_98 - prints natural numbers
 * from n to 98
 *
 * @n: starting point
 */

void print_to_98(int n)
{
	/* declaring variables */
	int i, j, neg;

	/* if n is greater than 98 */
	if (n > 98)
	{
		for (j = n; j >= 98; j--)
		{
			if (j < 100)
			{
				_putchar('0' + j / 10);
				_putchar('0' + j % 10);
			} else
				if (j < 1000)
				{
					_putchar ('0' + j / 100);
					_putchar('0' + (j % 100) / 10);
					_putchar('0' + (j % 100) % 10);
				}

			if(j > 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		/* if n is less than 98 */
		for (i = n; i < 99; i++)
		{
			/* if number is negative */
			if (i < 0)
			{
				/* make number positive */
				neg = -i;

				/* prints a - */
				_putchar('-');

				/**
				 * if number is greater than 9
				 * print the first number
				 * else 0 will be printed if 
				 * number is less than 9
				 * example 01, 02, 03
				 */
				if (neg > 99)
				{
					_putchar('0' + neg / 100);
					_putchar('0' + (neg % 100) / 10);
					_putchar('0' + (neg % 100) % 10);
				}
				else
				{
					if (neg > 9)
						_putchar('0' + neg / 10);
					_putchar('0' + neg % 10);
				}
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
	}
	_putchar('\n');
}
