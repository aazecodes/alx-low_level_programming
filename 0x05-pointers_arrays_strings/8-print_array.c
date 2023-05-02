#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * followed by a new line
 * @a: array to be printed
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	int j = 0;

	while (j < n)
	{
		if (j == 0)
			printf("%d", a[j]);
		else
			printf(", %d", a[j]);
		j++;
	}
	printf("\n");
}
