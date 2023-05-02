#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char tmp;
	int len1, len2, len3;

	for (len2 = 0; s[len2] != '\0'; len2++)
	{
	}
	len3 = len2 - 1;

	for (len1 = 0; len1 < len2 / 2; len1++)
	{
		tmp = s[len1];
		s[len1] = s[len3];
		s[len3--] = tmp;
	}
}
