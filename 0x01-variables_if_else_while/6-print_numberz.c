#include <stdio.h>

/**
 * main - entry point of program
 *
 * Return: always 0 (sucess)
 */

int main(void)
{
	int digit = 48;

	while (digit <= 57)
	{
		putchar(digit);
		digit++;
	}
	putchar('\n');
	return (0);
}
