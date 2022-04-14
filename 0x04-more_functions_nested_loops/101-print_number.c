#include "main.h"

/**
 * print_number - A function that prints an integer.
 * @n: integrer n
 */

void print_number(unsigned int n)
{
	unsigned int a, b;

	if (n >= 0)
		b = n;
	else
	{
		b = n * -1;
		_putchar('-');
	}
	for (a = 1; a * 10 <= b; a *= 10)
		;
	while (a > 0)
	{
		_putchar(b / a + '0');
		b %= a;
		i /= 10;
	}
}
