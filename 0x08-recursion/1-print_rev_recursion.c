#include "main.h"
/**
 * _print_rev_recursion - prints string in reverse
 * @s: the string to print
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
}
