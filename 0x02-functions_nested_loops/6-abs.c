#include "main.h"
/**
 * _abs - prints absolute value
 * @n: incoming value to find absolute of
 * Return: absolute value
 */
int _abs(int n)
{
	int absolute;

	if (n < 0)
		absolute = -*n;
	else
		absolute = n;
	return (absolute);
}
