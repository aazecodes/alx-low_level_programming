#include "main.h"
/**
 * rot13 - Write a function that encodes a string using rot13
 *
 * @r: analysed string
 *
 * Return: String converted to rot13
 *
 */

char *rot13(char *r)
{
	int index, index1;
	char lower[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char upper[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (index = 0; r[index] != '\0'; ++index)
	{
		for (index1 = 0; lower[index1] != '\0' ; index1++)
		{
			if (r[index] == lower[index1])
			{
				r[index] = upper[index1];
				break;
			}
		}
	}
	r[index] = '\0';
	return (r);
}
