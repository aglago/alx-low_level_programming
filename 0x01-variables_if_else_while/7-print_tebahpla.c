#include <stdio.h>

/**
 * main - entry point for program
 *
 * Return: always 0 (success)
 */

int main(void)
{

	int alphabet = 122;

	while (alphabet >= 97)
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');
	return (0);
}
