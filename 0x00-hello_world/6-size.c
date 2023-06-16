#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	printf("Size of a char: %d bytes(s)\n", sizeOf(char));
	printf("Size of a int: %d bytes(s)\n", sizeOf(int));
	printf("Size of a long int: %d bytes(s)\n", sizeOf(long int));
	printf("Size of a long long int: %d bytes(s)\n", sizeOf(long long int));
	printf("Size of a float: %d bytes(s)\n", sizeOf(float));
	return (0);
}
