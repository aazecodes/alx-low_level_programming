#include "main.h"
/**
 * string_toupper - Write a function that changes all lowercase letters of a
 * string to uppercase.
 *
 * @hi: This is the input string
 *
 * Return: Lowercase changed to uppercase of the string
 */
char *string_toupper(char *hi)
{
	int letter;
	int low = 'a' - 'A';

	for (letter = 0; hi[letter] != '\0'; ++letter)
	{
		if (hi[letter] >= 'a' && hi[letter] <= 'z')
		{
			hi[letter] = hi[letter] - low;
		}
	}
	return (hi);
}
