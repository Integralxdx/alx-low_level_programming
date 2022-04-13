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

	unsigned long ni, nf, n;

	float sum;

	ni = 0;

	nf = 1;

	while (1)

	{

		n = ni + nf;

		if (n > 4000000)

			break;

		if ((n % 2) == 0)

			sum += n;

		ni = nf;

		nf = n;

	}

	printf("%.0f\n", sum);

	return (0);

}
