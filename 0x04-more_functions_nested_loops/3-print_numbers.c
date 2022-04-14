#include "main.h"

/**
 * print_numbers - A func to print 0-9 followed by new line
 * Return: 0
 */

void print_numbers(void)
{
	int a;

	a = 0;

	for (a = 0; a < 10; a++)

	_putchar(a + '0');
	_putchar('\n');
}
