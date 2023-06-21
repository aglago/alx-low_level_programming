#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets
 * on 10 lines
 */
void print_alphabet_x10(void)
{
	int lines = 1;

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
