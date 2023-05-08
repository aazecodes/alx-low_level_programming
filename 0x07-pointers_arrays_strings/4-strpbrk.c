#include "main.h"
/**
*_strpbrk - The _strpbrk() function locates the first
* occurrence in the string s of any of the bytes in
*the string accept
*
*@s: string where search is made
*@accept: string where searched bytes are located
*
*Return:Returns a string
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; *(s + a); a++)
	{
		for (b = 0; *(accept + b); b++)
		{
			if (*(s + a) == *(accept + b))
			{
				break;
			}
		}
		if (*(accept + b) != '\0')
		{
			return (s + a);
		}
	}
	return (0);
}
