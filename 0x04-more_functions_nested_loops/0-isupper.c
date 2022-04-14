#include "main.h"
/**
 * _isupper - a function that checks for uppercase
 * @c: input character
 * Return: 1 if c is uppercase or 0 for otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
