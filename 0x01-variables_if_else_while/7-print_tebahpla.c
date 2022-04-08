#include <stdio.h>

/**
 * main - where all code will run through
 * Return: return 0 always
 * Description: Prints the lowercase alphabet in reverse order
 */

int main(void)

{

char lc;

for (lc = 'z'; lc >= 'a'; --lc)

putchar(lc);

putchar('\n');

return (0);

}
