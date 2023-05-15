#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function returns a pointer to a new string
 * which is a duplicate of the string str
 * @str: string
 * Return: Null or string
 */
char *_strdup(char *str)
{
	unsigned int a, b;
	char *s;

	if (str == NULL)
		return (NULL);
	for (a = 0; str[a] != '\0'; a++)
		;
	s = (char *)malloc(sizeof(char) * (a + 1));
	if (s == NULL)
		return (NULL);
	for (b = 0; b < a; b++)
		s[b] = str[b];
	s[b] = '\0';
	return (s);
}
