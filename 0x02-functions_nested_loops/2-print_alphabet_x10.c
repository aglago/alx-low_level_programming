#include "main.h"
/**
 * main - entry
 */
void print_alphabet_x10(void)
{
	int line = 1;

	while (lines <= 10)
	{
		int alphabet = 97;
		while (alphabet <= 122)
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		lines++;
	}
}
