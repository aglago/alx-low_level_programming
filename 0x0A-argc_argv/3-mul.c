#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * desc: program to multiply two numbers and print results
 *
 * @argc: parameter argument count
 * @argv: parameter argument vector
 *
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("Error\n");
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}

	return (0);
}
