#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - a function that returns the sum of all its paramters.
 * @n: paramter to the function.
 * @...: paramters to calculate the sum of numbers
 * Return: 0 or sum of parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numb;
	unsigned int comp = 0;
	int sum = 0;

	va_start(numb, n);

	while (comp < n)
	{
		sum += va_arg(numb, int);
		comp++;
	}

	va_end(numb);
	return (sum);
}
