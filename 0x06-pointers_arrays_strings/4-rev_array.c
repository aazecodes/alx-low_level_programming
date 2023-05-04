#include "main.h"
/**
 * reverse_array - Write a function that reverses the content of an array of
 * integers.
 *
 * @a: This is the input array
 * @n: This is the positions have the array
 *
 */
void reverse_array(int *a, int n)
{
	int arr, rev;

	rev = n - 1;
	for (arr = 0; arr < n / 2; arr++)
	{
		int begin, end;

		begin = a[arr];
		end = a[rev];
		a[arr] = end;
		a[rev] = begin;
		rev--;
	}
}
