#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * 
 * desc: program returns minimum coins
 * required for change for a given amt
 *
 * Return: always 0 if success
 */


int main(int argc, char *argv[])
{
	int i, coins = 0, cents;
	int deno[] = {25, 10, 5, 2, 1};

	/** checks for valid number of arguments */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}


	/** parsing string to number */
	cents = atoi(argv[1]);


	/**
	 * if cents passed is less than 1, minimum coins
	 * will be zero
	 */
	if (cents < 1)
	{
		printf("0\n");
	}

	/** finding minimum coins */
	for (i = 0; i < 5; i++)
	{
		coins = coins + cents / deno[i];
		cents = cents % deno[i];
	}
	printf("%d\n", coins);
}
