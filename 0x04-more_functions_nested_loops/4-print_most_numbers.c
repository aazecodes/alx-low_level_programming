#include "main.h"
/**
*print_most_numbers - prints numbers except 2 and 4
*
*Return: returns nothing
*/
void print_most_numbers(void)
{
	int num = 48;

	while (num < 58)
	{
	if ((num != 50) && (num != 52))
	{
		_putchar(num);
	}
		num++;
	}
	_putchar('\n');
}
