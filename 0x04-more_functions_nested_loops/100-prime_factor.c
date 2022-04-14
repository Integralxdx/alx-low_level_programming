#include <stdio.h>

/**
 * main - entry point
 * Return: 0 as always
 */

int main(void)
{
	long int i, n;

	n = 612852475143;
	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			n /= i;
			i--;
		}
	}
	printf("%ld\n", i);
	return (0);
}
