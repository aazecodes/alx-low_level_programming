#include "main.h"
/**
*print_square - prints squares
*@size: parameter
*Return:returns nothing
*/
void print_square(int size)
{
	int shape1 = 0, shape2 = 0;

	if (size > 0)
	{
	while (shape1 < size)
	{
	shape2 = 0;

	while (shape2 < (size - 1))
	{
	_putchar('#');
	shape2++;
	}
	_putchar('#');
	_putchar('\n');
	shape1++;
	}
	}
	else
	{
	_putchar('\n');
	}
}
