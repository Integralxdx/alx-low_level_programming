#include <stdio.h>

/**
 * main - where it all started
 * Description: prints the sum of even termed value of fibonacci
 * series of <4000000
 * Return: Always return 0
 * ni: initial nf: final n: new
 */

int main(void)

{

	long int ni, nf, n, sum;

	ni = 0;

	nf = 1;

	n = 0;

	sum = 0;

	while (n < 4000000)
	{
		n = ni + nf;
		if (n % 2 == 0)
		{
			sum += n;
		}
		ni = nf;
		nf = n;
	}
	printf("%lu", n);
	return (0);
}
