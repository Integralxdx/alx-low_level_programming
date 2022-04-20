#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry
 * Return: 0
 * this particular one choke
 */
int main(void)
{
	int a;

	srand(time(0));
	a = rand();
	printf("%i\n", a);
	return (0);
}
