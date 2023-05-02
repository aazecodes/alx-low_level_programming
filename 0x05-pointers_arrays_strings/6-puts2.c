#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string
 * followed by a new line
 * @str: string to print the chars from
 */
void puts2(char *str)
{
	int len, len1;

	for (len = 0; str[len] != '\0'; len++)
	{
	}
	for (len1 = 0; len1 < len; len1 += 2)
	{
		_putchar(str[len1]);
	}
	_putchar('\n');
}
