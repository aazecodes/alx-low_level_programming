#include "main.h"
/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: int
 * @m: int
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = 0;
	unsigned long int len = n ^ m;

	while (len > 0)
	{
		if (len & 1)
			i++;
		len >>= 1;
	}
	return (i);
}
