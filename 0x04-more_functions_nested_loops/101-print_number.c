#include "main.h"

/**
 * print_number - A function that prints an integer.
 * @n: integrer n
 */

void print_number(int n)
{
	unsigned int a;

	if (n < 0)
	{
		_putchar('-');
		a = -n;
	}
	else
	{
		a = n;
	}
	if (a / 10 != 0)
		print_number(a / 10);
	_putchar((a % 10) + '0');
}
