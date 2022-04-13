#include <stdio.h>

/**
 * main - where it all starte
 * Description: prints the first 98 fibonacci series
 * starting with 1 & 2
 * Return: Always return 0
 * ni: initial nf: final n: new
 */

int main(void)

{

	int i;

	unsigned long int ni, nf, n;

	ni = 0;

	nf = 1;

	for (i = 0; i < 98; i++)

	{
		n = ni + nf;
		if (i == 97)
			printf("%lu", n);
		else
			printf("%lu, ", n);
		ni = nf;
		nf = n;
	}
	printf("\n");
	return (0);
}
