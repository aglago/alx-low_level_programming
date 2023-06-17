#include <stdio.h>

/**
 * main - entry point of program
 * description: prints all numbers of base 16 in lower case
 * Return: always 0 (success)
 */

int main(void)
{
	int hexa = '0';
	int hexa_alph = 97;

	while (hexa <= '9')
	{
		putchar(hexa);
		hexa++;
	}
	while (hexa_alph <= 102)
	{
		putchar(hexa_alph);
		hexa_alph++;
	}
	putchar('\n');
	return (0);
}
