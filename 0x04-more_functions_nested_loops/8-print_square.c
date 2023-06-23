#include "main.h"
/**
 * print_square - function that prints a square
 * @size: number to be checked
 * Return: a square
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int count, i;

		for (count = 0; count < size; count++)
		{
			for (i = 0; i < size; i++)
			{
				_putchar('#');
			}
			 _putchar('\n');
		}
	}
}
