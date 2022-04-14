#include "main.h"

/**
 * print_line - A func to print a line
 * @n: num of lines
 */

void print_line(int n)
{
	int x;

	if (n > 0)
	{
	for (x = 0; x < n; x++)
	{
	_putchar('_');
	}
	}
	_putchar('\n');
}
