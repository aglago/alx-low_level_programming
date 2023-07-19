#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - prints index
 *
 * @array: array
 * @size: size of array
 * @cmp: function pointer
 *
 * Return: index if function returns
 * true, or -1 if function returns
 * false or no element matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
