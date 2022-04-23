#include "main.h"

/**
 * reverse_array - a function that reverse
 * @a: array to be reveresed
 * @n: no of element in array
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	i = 0;
	n--;
	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[n - i];
		a[n - i] = temp;
		i++;
	}
}
