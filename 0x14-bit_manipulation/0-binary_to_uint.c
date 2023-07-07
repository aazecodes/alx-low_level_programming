#include "main.h"
/**
 * binary_to_uint - Converts binary to unsigned int
 * @b: Pointer to string of chars
 * Return: Converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num1, num2 = 0;


	if (!b)
		return (0);

	for (num1 = 0; b[num1] != '\0'; num1++)
	{
		if (b[num1] != '0' && b[num1] != '1')
		{
			return (0);
		}

		num2 <<= 1;

		if (b[num1] & 1)
		{
			num2++;
		}
	}
	return (num2);
}
