#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: character c
 * Return: On success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
