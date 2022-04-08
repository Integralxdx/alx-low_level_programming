#include <stdio.h>

/**
 * main - where all code will run through
 * Return: return 0 always
 * Description: Prints the lowercase alphabet followed by a new line
 */

int main(void)

{

int lca;

for (lca = 0; lca < 26; ++lca)

putchar('a' + lca);

putchar('\n');

return (0);

}
