#include "holberton.h"
/**
 * swap_int - function to swap two integers
 * @a: first number to be checked
 * @b: second number to be checked
 * Return: 0 always
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
