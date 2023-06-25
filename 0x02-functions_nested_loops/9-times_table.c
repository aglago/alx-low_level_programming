#include "main.h"
/**
 * times_table - prints times table from 0 to 9
 */
void times_table(void)
{
	int num, t_num;

	for (num = 0; num <= 9; num++)
	{
		for (t_num = 0; t_num <= 9; t_num++)
		{
			int ans = num * t_num;

			if (t_num == 0)
				_putchar(ans + '0');
			else if (ans < 10)
			{
				_putchar(' ');
				_putchar(ans + '0');
			}
			else
			{
				_putchar(ans / 10 + '0');
				_putchar(ans % 10 + '0');
			}
			if (t_num < 9)
			{
				_putchar(',');
				_putchar(' ');
			}

		}
		_putchar('\n');
	}
}
