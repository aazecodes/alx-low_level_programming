#include "main.h"
/**
*_strstr - The _strstr() function finds the first occurrence
* of the substring needle in the string haystack.
*@haystack: string where the search is made
*@needle: string whose occurence is searched in haystack
*Return: returns a string
*/
char *_strstr(char *haystack, char *needle)
{
	int a;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		a = 0;

		if (haystack[a] == needle[a])
		{
			do {
				if (needle[a + 1] == '\0')
					return (haystack);
				a++;
			} while (haystack[a] == needle[a]);
		}
		haystack++;
	}
	return ('\0');
}
