#include "main.h"
/**
 * _isupper - checks for upper character
 * @c: checking the character
 * Return: 1 for character and 0 for anythig else
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 96)
		return (1);
	else
		return (0);
}
