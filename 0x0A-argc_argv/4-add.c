#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * desc: program to add two positive numbers and print
 *
 * @argc: parameter argument count
 * @argv: parameter argument vector
 *
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;
	unsigned int arg;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			arg = atoi(argv[i]);
			if (arg != 0 || argv[i][0] == '0')
				sum += arg;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}

	return (0);
}
