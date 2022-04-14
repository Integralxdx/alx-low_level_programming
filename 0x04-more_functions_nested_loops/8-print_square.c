#include "main.h"

/**
 * print_square - A function that prints a square
 * @size: square size
 */

void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
			_putchar('#');
		-putchar('\n');
	}
}
