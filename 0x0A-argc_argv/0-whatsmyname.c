#include <stdio.h>

/**
 * main - entry point
 *
 * desc: program to print program's name using arguments to main function
 *
 * @argc: parameter argument count
 * @argv: parameter argument vector
 *
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	(void)argc; /** casted argc to void to indicate it is intentionally unused */
	printf("%s\n", argv[0]);

	return (0);
}
