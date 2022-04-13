#include <stdio.h>

/**
 *   main - where it all started
 *     Description: prints the sum of all multiples
 *       of 3 or 5 below 1024
 *         Return: Always return 0
 */

int main(void)

{

	int x, sum;

	sum = 0;

	for (x = 3; x < 1024; x++)

	{

		if ((x % 3 == 0) || (x % 5 == 0))

		{

			sum += x;

		}

	}

	printf("%d\n", sum);

	return (0);

}
