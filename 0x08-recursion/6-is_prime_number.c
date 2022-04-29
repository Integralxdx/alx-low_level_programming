#include "main.h"

/**
 *evaluate_num - recursion loop
 *@num: num
 *@i: iterator no
 *Return: 0 or 1
 */

int evaluate_num(int num, int i)
{
	if (i == num - 1)
	{
		return (1);
	}
	else if (num % i == 0)
	{
		return (0);
	}
	if (num % i != 0)
	{
		return (evaluate_num(num, i + 1));
		}
	return (0);
}

/**
 *is_prime_number - funct to evaluate prime no
 *@num: number to check
 *Return: return 1 if prime 0 for other
 */

int is_prime_number(int num)
{
	int i;
	
	i = 2;
	if (num < 2)
	{
		return (0);
	}
	if (num == 2)
	{
		return (1);
	}
	return (evaluate_num(num, i));
}
