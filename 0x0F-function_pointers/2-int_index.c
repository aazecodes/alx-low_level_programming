#include "function_pointers.h"
/**
*int_index - a function that searches for an integer
*@array: array parameter
*@size: size of the array
*@cmp: parameter to compare values
*Return: -1 if no element match
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int check;

	if (!(array != NULL && cmp != NULL))
		return (-1);
	for (check = 0; check < size; check++)
	{
		if (cmp(array[check]) != 0)
		return (check);
	}
	return (-1);
}
