#include "function_pointers.h"
/**
*array_iterator - a function that executes on each element of an array
*@array: array parameter
*@size: size of array
*@action: a pointer to the function
*Return: 0
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a = 0;

	if (array == NULL || action == NULL)
	{
		return;
	}
	while (a < size)
	{
		action(array[a]);
		a++;
	}
}
