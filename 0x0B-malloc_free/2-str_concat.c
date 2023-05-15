#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int a, b, c, mx;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
		;
	for (b = 0; s2[b] != '\0'; b++)
		;
	s = malloc(sizeof(char) * (a + b + 1));

	if (s == NULL)
		return (NULL);

	for (c = 0; c < a; c++)
		s[c] = s1[c];

	mx = b;
	for (b = 0; b <= mx; c++, b++)
		s[c] = s2[b];

	return (s);
}
