#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int len, len1, len2;

	for (len = 0; str[len] != '\0'; len++)
	{
	}
	if (len % 2 == 0)
	{
		for (len2 = len / 2; str[len2] != '\0'; len2++)
		{
			_putchar(str[len2]);
		}
	}
	else if (len % 2)
	{
		for (len1 = (len - 1) / 2; len1 < len - 1; len1++)
		{
			_putchar(str[len1 + 1]);
		}
	}
	_putchar('\n');
}
