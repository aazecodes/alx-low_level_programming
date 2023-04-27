#include "main.h"
/**
*print_diagonal - prints a diagonal
*@n:parameter
*Return:returns nothing
*/
void print_diagonal(int n)
{
	int a = 0, b = 0;

	if (n > 0)
	{
	while (a < n)
	{
	b = 0;

	while (b < a)
	{
	_putchar(' ');
	b++;
	}
	_putchar('\\');
	if (a == (n - 1))
	continue;
	_putchar('\n');
	a++;
	}
	}
	_putchar('\n');
}
