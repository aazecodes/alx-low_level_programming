#include "main.h"
/**
* infinite_add - C function that adds two numbers stored
*in strings to a buffer.
*@n1:first number to be added
*@n2:second number to be added
*@r: store result
*@size_r: size of buffer
*Return:returns pointer to result
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, i, j, k, num, tens = 0;

	while (n1[len1] != '\0')
	{
		len1++;
	}
	while (n2[len2] != '\0')
	{
		len2++;
	}
	if (len1 + len2 + 1 > size_r)
		return (0);
	for (i = 0; i < len1 + len2; i++)
	{
		r[i] = '0';
	}
	r[i] = '\0';
	for (i = len1 - 1, k = 0; i >= 0; i--, k++)
	{
		tens = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			num = (n1[i] - '0') * (n2[j] - '0') + (r[k + j] - '0') + tens;
			r[k + j] = (num % 10) + '0';
			tens = num / 10;
		}
		if (tens > 0)
		{
			r[k + j] = tens + '0';
		}
	}
	i = 0;
	while (r[i] == '0' && i < len1 + len2 - 1)
	{
		i++;
	}
	for (j = 0; i < len1 + len2; i++, j++)
	{
		r[j] = r[i];
	}
	r[j] = '\0';
	return (r);
}
