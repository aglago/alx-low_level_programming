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
	int f, s, ans, (*op)(int, int);

	if (argc != 4)
		return (-1);

	f = atoi(argv[1]);
	s = atoi(argv[3]);

	op = get_op_func(argv[2]);
	if (op == NULL)
		printf("Error\n");
	else
	{
		ans = op(f, s);
		printf("%d\n", ans);
	}

	return (0);
}
