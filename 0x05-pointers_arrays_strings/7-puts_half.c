#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * @str: string to be half printed
 */

void puts_half(char *str)
{
	int a, b;

	for (a = 0; str[a] != '\0'; a++)
	{
	}
		b = a / 2;
		if (a % 2 != 0)
			b++;
		for (; b < a; b++)
		{
			_putchar(str[b]);
		}
		_putchar('\n');
}
