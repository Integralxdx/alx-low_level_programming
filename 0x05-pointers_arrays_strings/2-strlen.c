#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: check for lenght
 * Return: length
 */
int _strlen(char *s)
{
	int i, length;

	i = 0;
	while (s[i] != '\0')
	{
	i++;
	}
	length = i;
	return (length);
}
