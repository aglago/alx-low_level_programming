#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse recursively
 * @s: string pointer
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_print_rev_recursion(s + 1);
		_print_rev_recursion(*s);
	}
}
