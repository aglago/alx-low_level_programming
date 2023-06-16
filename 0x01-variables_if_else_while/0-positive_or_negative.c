#include <stdlib.h>
#include <time.h>
#include <math.h>

/**
 *  main - entry point
 *
 *  Return: always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n");
	else if (n == 0)
		print("%d is zero\n");
	return (0);
}
