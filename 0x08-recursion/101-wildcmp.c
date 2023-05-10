#include "main.h"
/**
* wildcmp - compares two strings and returns 1 if identical
* @s1: string to be checked
* @s2: pattern to be checked
* Return: 1 or 0
*/
int wildcmp(char *s1, char *s2)
{
	if (!(*s1) && !(*s2))
	{
		return (1);
	}
	else if (*s2 == *s1)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	}
	return (0);
}
