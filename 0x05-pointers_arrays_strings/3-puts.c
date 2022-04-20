#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line, to stdout
 * @str: string
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(stri[i]);
		i++;
	}
	_putchar('\n');
}
