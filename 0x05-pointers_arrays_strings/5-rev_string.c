#include "main.h"

/**
 * rev_string - a func that everses a str
 * @s: string to be reversed.
 */
void rev_string(char *s)
{
	int a, b;
	char temp;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	a--;
	for (b = 0; b <= a / 2; b++)
	{
		temp = s[b];
		s[b] = s[a - b];
		s[a - b] = temp;
	}
}
