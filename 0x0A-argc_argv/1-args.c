#include <stdio.h>

/**
 * main - entry point
 *
 * desc: program to print the number of arguments passed to the main function
 *
 * @argc: parameter argument count
 * @argv: parameter argument vector
 *
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	(void)argv;
	/**
	 * casted argv to void to say that argv
	 * is intensionally not used in the program
	 */

	printf("%d\n", argc - 1);

	return (0);
}
