#include "main.h"
/**
 * _islower - prints if lower character
 * @c: checking the character
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
