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

	prev2 = 0;

	prev1 = 1;

	for (i = 0; i < 98; i++)

	{
		n = ni + nf;
		if (i == 97)
			printf("%lu", n);
		else
			printf("%lu, ", n);
		nf = ni;
		ni = n;
	}
	printf("\n");
	return (0);
}