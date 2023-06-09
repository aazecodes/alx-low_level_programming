#include "main.h"
#include <stdio.h>
/**
*print_diagsums -  a function that prints the sum of
* the two diagonals of a square matrix of integers.
*@a:matrix to be summed
*@size:size of the matrix
*/
void print_diagsums(int *a, int size)
{
	int i, sumdia1 = 0, sumdia2 = 0;

	for (i = 0; i < size; i++)
	{
		sumdia1 += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		sumdia2 += a[i];
		a -= size;
	}

	printf("%d, %d\n", sumdia1, sumdia2);
}
