#include "dog.h"

/**
 * print_dog - prints the struct dog
 *
 * @d: the struct
 */

void print_dog(struct dog *d)
{
	printf("Name: %s\n", (*d).name);
	printf("Age: %f\n", (*d).age);
	printf("Owner: %s\n", (*d).owner);
}
