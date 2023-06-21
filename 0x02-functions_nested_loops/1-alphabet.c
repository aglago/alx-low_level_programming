#include <stdio.h>
#include "main.h"

/**
 * main - entry
 * Return: always 0 for success
 */

int main(void)
{
	int alphabet = 97;

	while (alphabet <= 122)
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
	return (0);
}
