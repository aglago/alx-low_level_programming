#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * main - prinzs to standard error
 * Return: always 0 if successful
 */

int main(void)
{
	int file_dsc = open("/dev/stderr", O_WRONLY);
	char message[] =
"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(file_dsc, message, strlen(message));
	close(file_dsc);
	return (0);
}
