#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: index
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int a, c, b = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
	{
	}
	while (s2[b] != '\0')
	{
		b++;
	}
	if (n > b)
	n = b;
	ptr = malloc((a + n + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (c = 0; c < a; c++)
	{
		ptr[c] = s1[c];
	}
	for (; c < (a + n); c++)
	{
		ptr[c] = s2[c - a];
	}
	ptr[c] = '\0';
	return (ptr);
}
