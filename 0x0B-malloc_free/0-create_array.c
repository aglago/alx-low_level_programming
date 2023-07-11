#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates a local array
 * @size: size of locally created array
 * @c: character to be inserted into new array
 *
 * desc: using malloc, I am able to return a pointer to a locally created array
 * Return: returns the locally created array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		*array = c;
	return (array);
}
