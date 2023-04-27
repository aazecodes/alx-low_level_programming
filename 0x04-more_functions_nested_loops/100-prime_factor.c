#include <stdio.h>

/**
*main- prints the largest prime factor
*of a number
*
*Return: returns 0
*/
int main(void)
{
	long number = 612852475143;
	int fig;

	for (fig = 1; fig < number / 2; fig++)
	{
	if (number % fig == 0)
	{
	number /= 2;
	continue;
	}
	for (fig = 3; fig < number / 2; fig += 2)
	{
	if (number % fig == 0)
	{
	number /= fig;
	}
	}
	}
	printf("%ld\n", number);
	return (0);
}
