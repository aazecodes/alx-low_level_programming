#include "main.h"
/**
 * _strncat - Write a function that concatenates two strings
 * @dest: This is the output  dest
 * @src: This is the input src
 * @n: This is the number bytes fro src
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (dest[a] != '\0')
		a++;
	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		a++;
	}
	if (b < n)
	{
	dest[a] = '\0';
	}
	return (dest);
}
