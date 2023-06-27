#include "main.h"
/**
 * puts_half - prints the reverse of a string
 * @str: the string
 */
void puts_half(char *str)
{
	int length = 0, index;

	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 != 0)
		length = length - (1/2);
	index = 0;
	while (index <= length/2)
	{
		_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}
