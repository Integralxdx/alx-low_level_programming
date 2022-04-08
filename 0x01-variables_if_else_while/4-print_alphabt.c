#include <stdio.h>

/**
 * main - where all code will run through
 * Return: return 0 always
 * Description: Prints the lower case alphabet except q&e
 * lc: lower case ex q&e
 */

int main(void)

{

char lc;

for (lc = 'a'; lc <= 'z'; ++lc)

{

if (lc != 'e' && lc != 'q')

putchar(lc);

}

putchar('\n');
return (0);

}
