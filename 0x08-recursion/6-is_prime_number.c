#include "main.h"
/**
* is_prime_number - returns true if the number is prime
*@n: the number to check
*Return: prime number
*/
int is_prime_number(int n)
{
	int num = n / 2;

	if (n <= 1)
		return (0);
	return (prime(n, num));
}

/**
* prime - returns the 1 if n is prime
* @n: number to check
* @num: number to be checked
* Return: 1 or 0
*/
int prime(int n, int num)
{
	if (num <= 1)
	{
		return (1);
	}
	else if (n % num == 0)
	{
		return (0);
	}
	return (prime(n, num - 1));
}
