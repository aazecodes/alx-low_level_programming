#include "main.h"
/**
*_strchr - Returns a pointer to the first occurrence
*of the character c in the string s, or NULL if the
*character is not found
*
*@s:string targeted
*@c:character targeted
*
*Return: returns pointer to first occcurence of c
*/
char *_strchr(char *s, char c)
{
	int j;

	for (j = 0; (s[j] != c) && (s[j] != '\0'); j++)
		;
	if (s[j] == c)
		return (s + j);
	else
		return (0);
}
