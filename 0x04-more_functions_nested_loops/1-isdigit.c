#include "main.h"
/**
 * _isdigit - checks if c is digit
 * @c: input parameter to check against
 * Return: 1 if its a digit and 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
