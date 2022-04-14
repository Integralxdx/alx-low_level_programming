#include "main.h"

/**
 * more_numbers - A function to print 10x
 * Return: 0
 */

void more_numbers(void)
{
	int a, b, c;

	for (a = 0; a <= 1; a++)
	{
	for (b = 0; b <= 9; b++)
	{
	for (c = 0; c < 10; c++)
	{
	if (!(a == 1 && b >= 5))
	{
	if (a)
	_putchar(a + '0');
	_putchar(b + '0');
	}
	}
	}
	_putchar('\n');
	}
}
