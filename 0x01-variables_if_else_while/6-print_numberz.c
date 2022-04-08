#include <stdio.h>

/**
 * main - where all code will run through
 * Return: return 0 always
 * Description: Prints number 0-9 from 0
 * num: number from 0-9
 */

int main(void)

{

int num;

for (num = 0; num <= 9; ++num)

putchar('0' + num);

putchar('\n');

return (0);

}
