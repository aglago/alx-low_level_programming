#include <stdio.h>

/**
 * main - entry point of program
 * description: program to print all possible different combinations of three
 * digits
 * Return: always 0 (success)
 */

int main(void)
{
	int i, j, k;

	i = '0';
	while (i <= '9')
	{
		j = '1';
		while (j <= '9')
		{
			k = '2';
			while (k <= '9')
			{
				if ((i == j == k) || (i == j) || (i == k) || (j == k))
				{
					k++;
					continue;
				}
				if (j < i || k < j)
				{
					k++;
					continue;
				}
				putchar(i);
				putchar(j);
				putchar(k);
				if ((k != '9') || (k == '9' && j != '8' && i != '7') || (k == '9' && j == '8' && i != '7'))
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
