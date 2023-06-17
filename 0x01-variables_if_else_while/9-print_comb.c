#include <stdio.h>

/**
 * main - entry point for program
 * description: prints all possible combinations of single-digit numbers
 * separated by , followed by space
 * Return: always 0 (success)
 */

int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		if (i < '9')
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
