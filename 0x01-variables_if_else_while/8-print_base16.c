#include <stdio.h>

/**
 * main - where all code will run through
 * Return: return 0 always
 * Description: Prints all the numbers of base 16 in lowercase
 */

int main(void)

{

char y;

for (y = '0'; y <= '9'; ++y)

putchar(y);

for (y = 'a'; y <= 'f'; ++y)

putchar(y);

putchar('\n');

return (0);

}
