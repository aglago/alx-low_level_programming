#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copy of a string
 * @str: string
 *
 * Return: a pointer to a string
 */

char *_strdup(char *str)
{
	int len, i;
	char *copy;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++);
	copy = malloc(len * sizeof(char));
	if (copy == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		copy[i] = str[i];
	copy[i] = '\0';
	return (copy);
}
