
#include "main.h"
/**
*more_numbers - prints numbers to 14
*
*Return: returns nothing
*/
void more_numbers(void)
{
	int num1 = 0, num2 = 0;

	while (num1 < 10)
	{
	num2 = 0;

	while (num2 <= 14)
	{
	if (num2 > 9)
	{
	_putchar((num2 / 10) + '0');
	}
	_putchar((num2 % 10) + '0');
	num2++;
	}
	_putchar(10);
	num1++;
	}
}
