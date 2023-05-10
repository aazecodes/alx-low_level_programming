#include "main.h"
/**
* _sqrt_recursion - returns the natural square root of a number
* @n: number to be used
* Return: the square root of n
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (_sqrt(0, n));
	}
}

/**
 * _sqrt - returns the square root of a number
 * @n: test number
 * @y: squared number
 * Return: the square root of n
 */
int _sqrt(int n, int y)
{
	if (n > y / 2)
		return (-1);
	else if (n * n == y)
		return (n);
	return (_sqrt(n + 1, y));
}
