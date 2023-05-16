#include "main.h"
#include <stdlib.h>
/**
 * argstostr - a function that concatenates all the arguments of your program.
 * @ac: integer
 * @av: character
 * Return: Null or string.
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int a, b, c = 0, check = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; av[a]; a++)
	{
		for (b = 0; av[a][b]; b++)
			c++;
		c++;
	}
	s = (char *) malloc(c * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);
	for (a = 0; av[a]; a++)
	{
		for (b = 0; av[a][b]; b++, check++)
			s[check] = av[a][b];
		s[check] = '\n';
		check++;
	}
	s[check] = '\0';
	return (s);
}
