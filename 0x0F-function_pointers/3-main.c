#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - entry
 *
 * desc: calculator
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always 0 if success
 */

int main(int argc, char *argv[])
{
	if (argc != 4)
		return (-1);

	printf("%d", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
