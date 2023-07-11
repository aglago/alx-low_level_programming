#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to a string
 */

char *str_concat(char *s1, char *s2)
{
	int i1, i2, i, j, k = 0, len1 = 0, len2 = 0, len;
	char *concat_string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i1 = 0; s1[i1] != '\0'; i1++)
		len1++;
	for (i2 = 0; s2[i2] != '\0'; i2++)
		len2++;
	len = len1 + len2;

	concat_string = malloc((len + 1) * sizeof(char));
	if (concat_string == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		concat_string[i] = s1[i];
	for (j = len1; j < len; j++)
	{
		concat_string[j] = s2[k];
		k++;
	}
	concat_string[j] = '\0';
	return (concat_string);
}
