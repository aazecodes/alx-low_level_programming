#include "main.h"
/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int a, b;

	for (a = 0; src[a] != '\0'; a++)
	{
	}
	for (b = 0; b < a; b++)
	{
		dest[b] = src[b];
	}
	dest[b] = '\0';
	return (dest);
}
