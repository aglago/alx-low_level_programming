#include <stdio.h>

/**
 * main - entry point for program
 *
 * Return: always 0 (success)
 */

int main(void)
{

	unsigned char alphabet = 97;

	while (alphabet <= 122)
	{
		if (alphabet == 101 || alphabet == 113)
		{
			alphabet++;
			continue;
		}
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
