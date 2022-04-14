#include "main.h"

/**
 * print_numbers - A func to print 0-9 followed by new line
 */

void print_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
