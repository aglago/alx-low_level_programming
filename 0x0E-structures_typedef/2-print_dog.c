#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the struct dog
 *
 * @d: the struct
 */

void print_dog(struct dog *d)
{
	/** checks if struct is null */
	if (d == NULL)
		return;

	/** prints content of struct */
	printf("Name: %s\n", ((*d).name == NULL) ? "(nil)" : (*d).name);
	printf("Age: %f\n", (*d).age);
	printf("Owner: %s\n", ((*d).owner == NULL) ? "(nil)" : (*d).owner);
}
