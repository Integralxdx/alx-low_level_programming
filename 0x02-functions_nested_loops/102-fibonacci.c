#include <stdio.h>

/**
 * main - where it all started
 * Description: prints the first 50 fibonacci series
 * including 1 & 2
 * Return: Always return 0
 * ni: initial nf: final n: new
 */

int main(void)

{

	int i;

	long int ni, nf, n;

	ni = 0;

	nf = 1;

	for (i = 0; i < 50; i++)

	{

		n = ni + nf;

		if (i == 49)
			printf("%lu", n);
		else
			printf("%lu, ", n);
		ni = nf;
		nf = n;
	}
	printf("\n");
	return (0);
}
