#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - iterates and executes
 * function pointer
 *
 * @array: array
 * @size: size of array
 * @action: functon pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
