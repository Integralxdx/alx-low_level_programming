#include "main.h"

/**
 * print_triangle - A function that prints a triangle.
 * @size: 1/2 * b * h
 */

void print_triangle(int size)
{
	int b, h;

	if (size < 1)
		_putchar('\n');

	for (b = 1; b <= size; b++)
	{
		for (h = 0; h < size; h++)
		{
			if (size - h <= b)

				_putchar('#');
			else

				_putchar(' ');
		}

		_putchar('\n');
	}
}
