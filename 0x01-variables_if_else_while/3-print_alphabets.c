#include <stdio.h>

/**
 * main - entry point for program
 *
 * Return: always 0 (success)
 */

int main(void)
{

	int small_alphabet = 97;
	int large_alphabet = 65;

	while (small_alphabet <= 122)
	{
		putchar(small_alphabet);
		small_alphabet++;
	}
	while (large_alphabet <= 90)
	{
		putchar(large_alphabet);
		large_alphabet++;
	}
	putchar('\n');
	return (0);
}
