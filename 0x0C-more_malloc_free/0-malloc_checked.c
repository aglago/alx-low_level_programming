#include "main.h"
/**
 * *malloc_checked - function
 * @b: parameter
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	char *ptr;
	ptr = malloc(sizeof(int) * b);

	if (ptr == NULL)
	{
		exit(98);
		return (NULL);
	}
	return (p);
}
