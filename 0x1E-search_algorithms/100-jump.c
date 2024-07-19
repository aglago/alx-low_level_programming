#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index or -1
 */
int jump_search(int *array, size_t size, int value)
{
	int js = sqrt((int)size), i = 0, j = 0;

	if (!array)
		return (-1);

	while (array[i] < value)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i += js;
	}

	printf("Value found between indexes [%d] and [%d]\n", i - js, i);

	for (j = i - js; j <= i; j++)
	{
		printf("Value checked array[%d] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}

	return (-1);
}
