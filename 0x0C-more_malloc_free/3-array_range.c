#include "main.h"
#include <stdlib.h>
/**
* array_range - a function that creates an array of integers
* @min: smallest number in the array
* @max: lagrest value in the array
* Return: pointer
*/
int *array_range(int min, int max)
{
	int *ptr, a, b = 0;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(*ptr) * ((max - min) + 1));
	if (ptr == NULL)
		return (NULL);
	for (a = min; a <= max; a++)
	{
		ptr[b] = a;
		b++;
	}
	return (ptr);
}
