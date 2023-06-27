#include "main.h"
/**
 * _strlen - calculates the length of a string
 * @s: the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
	{
		length++;
	}
	return (length);
}
