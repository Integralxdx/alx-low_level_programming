#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: first integer
 * @b: second integrer
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
