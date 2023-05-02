#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	if (s[i] == '\0')
	{
		return (0);
	}
	while (s[i] == ' ' || s[i] == '\t'
			|| s[i] == '\n' || s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			sign = (sign * (-1));
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		int r = result * 10;
		int q =  s[i] - '0';

		result = r + q;
		i++;
	}
	return (sign * result);
}
