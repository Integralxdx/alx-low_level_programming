#include "main.h"
/**
 * _strchr - a function that locates a character in a string.
 * @s: The string
 * @c: The character
 *
 * Return: Pointer to the character
*/

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	if (c == '\0')
		return (&s[a]);
	return ('\0');
}
