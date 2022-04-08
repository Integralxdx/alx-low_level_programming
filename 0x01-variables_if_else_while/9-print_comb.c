#include <stdio.h>

/**
 * main - where all code will run through
 * Return: return 0 always
 * Description: Prints all possible combinations of single-digit no
 */

int main(void)

{

int x = 0;

while (x < 10)

{

putchar(48 + x);

if (x != 9)

{

putchar(',');

putchar(' ');

}

x++;

}

putchar('\n');

return (0);

}
