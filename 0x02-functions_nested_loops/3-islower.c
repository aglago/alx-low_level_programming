#include "main.h"
/**
 * _islower - prints if lower character
 * @c: checking the character
 * Return: 1 for character and 0 for anythig else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
