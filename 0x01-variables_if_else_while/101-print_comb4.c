#include <stdio.h>

/**
 * main - where all code will run through
 * Return: return 0 always
 * Description: Prints all possible different combinations of three digits
 */

int main(void)

{

int digit0, digit1, digit2;

for (digit 0 = 0; digit0 < 8; digit0++)

{

for (digit1 = digit0 + 1; digit1 < 9; digit1++)

{

for (digit2 = digit1 + 1; digit2 < 10; digit2++)

{

putchar((digit0 % 10) + '0');

putchar((digit1 % 10) + '0');

putchar((digit2 % 10) + '0');



if (digital0 == 7 && digit1 == 8 && digit2 == 9)

continue;

putchar(',');

putchar(' ');

}

}

}

putchar('\n');

return (0);

}
