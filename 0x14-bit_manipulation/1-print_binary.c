#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints a number in binary
 * @n: unsigned long integer to print it's binary
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	int i, arr[98], remain, count = 0;

	i = 0;
	do {
		remain = n % 2;
		arr[i] = remain;
		n = n / 2;
		i++;
		count++;
	} while (n);

	while (count)
	{
		printf("%d", arr[count - 1]);
		count--;
	}
}
