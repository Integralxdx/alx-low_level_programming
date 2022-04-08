#include <stdio.h>

/**
 * main - where all code will run through
 * Return: return 0 always
 * Description: Prints the lowercase alphabet, then upper case.
 */

int main(void)

{

int luca;

for (luca = 0; luca < 26; ++luca)

putchar('a' + luca);

for (luca = 0; luca < 26; ++luca)

putchar('A' + luca);

putchar('\n');
return (0);

}
