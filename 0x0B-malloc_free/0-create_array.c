#include "main.h"
#include <stdlib.h>
/**
* create_array - a function that creates and array of characters
* @size: the size of the array
* @c: the character to create the array for
* Return: returns a pointer to the array
*/
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int a;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(c) * size);
	if (arr == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
		arr[a] = c;
	return (arr);
}
