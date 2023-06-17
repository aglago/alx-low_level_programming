#include <stdio.h>

/**
 * main - entry point of program
 *
 * Return: always 0 (sucess)
 */

int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		printf("%d", digit);
		digit++;
	}
	putchar('\n');
	return (0);
}
