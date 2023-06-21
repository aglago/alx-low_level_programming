#include "main.h"
/**
 * _isalpha - prints if character
 * @c: input parameter to check
 * Return: 1 if character 0 if anything else
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
