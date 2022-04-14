#include "main.h"

/**
 * _isdigit - A function that checks for digit
 * @c: character
 * Return: 1 for digit 0 for otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
