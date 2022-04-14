#include "main.h"

/**
 * print_diagonal - A func to draw a diagonal line across d terminal.
 * @n: diagonal length
 */

void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (a = 0; a < n; a++)
	{
		b = a;
		while (b--)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
