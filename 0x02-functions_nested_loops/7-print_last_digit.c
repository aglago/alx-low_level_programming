#include "main.h"
/**
 * print_last_digit - as name suggests
 * @n: number
 * Return: the last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = -n;
	int last_num = n % 10;

	_putchar(last_num + '0');
	return (last_num);
}
