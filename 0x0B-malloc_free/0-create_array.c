#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates a local array
 *
 * desc: using malloc, I am able to return a pointer to a locally created array
 * Return: returns the locally created array
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);
	else
	{
		char *array = malloc(size * sizeof(char));
		if (array == NULL)
			return (NULL);
		else
		{
			*array = c;
			return (array);
		}
	}
}
