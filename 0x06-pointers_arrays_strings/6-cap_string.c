#include "main.h"
/**
 * cap_string - Write a function that capitalizes all words of a string.
 *
 * @s: This is the input string
 *
 * Return: String capitalized
 */
char *cap_string(char *s)
{
	int change, index, count;

	char signs[] = {' ', ',', ';', '.', '!',
			 '?', '"', '(', ')', '{', '}',  '\t', '\n', '\0'};
	change = 32;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] >= 'a' && s[index] <= 'z')
		{
			s[index] =  s[index] - change;
		}
		change = 0;
		for (count = 0; signs[count] != '\0'; count++)
		{
			if (signs[count] == s[index])
			{
				change = 32;
				break;
			}
		}
	}
	return (s);
}
