#include "main.h"
/**
 * more_numbers - prints numbers 14 times
 */
void more_numbers(void)
{
	int line, number;

	line = 1;
	while (line <= 10)
	{
		number = 0;
		while (number <= 14)
		{
			if (number >= 10)
				_putchar('1');
			_putchar(number % 10 + '0');
			number++;
		}
		_putchar('\n');
		line++;
	}
}
