#include "main.h"
/**
 * print_numbers - prints number from 1 - 9
 */
void print_most_numbers(void)
{
	int num;

	num = '0';
	while (num <= '9')
	{
		if (num == '2' || num == '4')
		{
			num++;
			continue;
		}
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
