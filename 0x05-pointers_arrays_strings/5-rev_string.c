#include "main.h"
/**
 * rev_string - prints the reverse of a string
 * @s: the string
 */
void print_rev(char *s)
{
	int length = 0, index;

	while (s[length] != '\0')
	{
		length++;
	}

	index = length;
	while (index >= 0)
	{
		_putchar(s[index]);
		index--;
	}
}
