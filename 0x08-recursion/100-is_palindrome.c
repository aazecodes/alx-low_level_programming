#include "main.h"
/**
 * check_strlen - Returns string length
 * @s: string to check
 * Return: the integer length
 */
int check_strlen(char *s)
{
	if (*s)
	{
		s++;
		return (1 + check_strlen(s));
	}
	return (0);
}
/**
 * palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 * @l: The length of s.
 * @i: The index of the string to be checked.
 * Return: 1 or 0.
  */
int palindrome(char *s, int l, int i)
{
	if (i >= l)
	{
		return (1);
	}
	if (s[l] == s[i])
	{
		return (palindrome(s, l - 1, i + 1));
	}
	return (0);
}
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string to be checked
 * Return: the integer length
 */
int is_palindrome(char *s)
{
	int l = check_strlen(s), i = 0;

	return (palindrome(s, l - 1, i));
}
