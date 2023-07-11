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
	int len, i, j;
	char *copy;

	if (str == NULL)
		return (NULL);
	for (j = 0; str[j] != '\0'; j++)
		len++;
	copy = malloc((len + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		copy[i] = str[i];
	copy[i] = '\0';
	return (copy);
}
