#include "main.h"

/**
 * print_rev - a func thar print string in reverse.
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int n;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	n--;
	while (n >= 0)
	{
		_putchar(s[n]);
		n--;
	}
	_putchar('\n');
}
