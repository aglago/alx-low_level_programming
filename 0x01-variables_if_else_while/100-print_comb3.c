#include <stdio.h>

/**
 * main - entry point for program
 * description: prints all possible combinations of single-digit numbers
 * separated by , followed by space
 * Return: always 0 (success)
 */

int main(void)
{
	int i, j;

	i = '0';
	while (i <= '9')
	{
		j = '1';
		while (j <= '9')
		{
			if (i == j)
			{
				j++;
				continue;
			}
			if (j < i)
			{
				j++;
				continue;
			}
			putchar(i);
			putchar(j);
			if ((j != '9') || (j == '9' && i == '8'))
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
