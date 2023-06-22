#include "main.h"
/**
 * print_numbers - prints number from 1 - 9
 */
void print_numbers(void)
{
	int num;

	num = '0';
	while (num <= '9')
	{
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
