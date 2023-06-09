#include "main.h"
/**
 * _strncpy - Write a function that copies a string, with number of bytes
 * @dest: This is the output dest
 * @src: This is the input source
 * @n: This is the number of bytes to copy
 *
 *Return: Copied string with the number of bytes
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0' ; a++)
	{
		dest[a] = src[a];
	}
	for (; a  < n; a++)
	{
		dest[a] = '\0';
	}
	return (dest);
}
