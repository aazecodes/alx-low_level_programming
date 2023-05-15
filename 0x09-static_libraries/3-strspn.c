#include "main.h"
/**
*_strspn - search the number of bytes in the initial
* segment of s which consist only of bytes from accept
*@s:source string
*@accept:reference bytes container
*
*Return:returns the number of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b;

	for (b = 0; *(s + b); b++)
	{
		for (a = 0; *(accept + a); a++)
		{
			if (*(s + b) == *(accept + a))
				break;
		}
	if (*(accept + a) == '\0')
		break;
	}
	return (b);
}
