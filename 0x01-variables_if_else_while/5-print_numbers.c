#include <stdio.h>

/**
 * main - where all code will run through
 * Return: return 0 always
 * Description: Prints number 0-9
 * num: number from 0-9
 */

int main(void)

{

char num;

for (num = '0'; num <= '9'; ++num)

putchar(num);

putchar('\n');

return (0);

}
