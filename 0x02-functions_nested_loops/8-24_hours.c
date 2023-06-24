#include "main.h"

/**
 * jack_bauer - prints seconds and minites
 */

void jack_bauer(void)
{
	int min1, min2, sec1, sec2;

	for (min1 = 48; min1 <= 50; min1++)
	{
		for (min2 = 48; min2 <= 51; min2++)
		{
			for (sec1 = 48; sec1 <= 53; sec1++)
			{
				for (sec2 = 48; sec2 <= 57; sec2++)
				{
					_putchar(min1);
					_putchar(min2);
					_putchar(58);
					_putchar(sec1);
					_putchar(sec2);
					_putchar('\n');
				}
			}
		}
	}
}
