#include "main.h"
/**
 * print_diagonal - print diagonal
 * @n: length of diagonal
 */
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int numofspaces, space, line;

		line = 1;
		while (line <= n)
		{
			numofspaces = line - 1;
			space = 0;
			while (space < numofspaces)
			{
				_putchar(' ');
				space++;
			}
			_putchar('\\');
			line++;
		}
	}
}
