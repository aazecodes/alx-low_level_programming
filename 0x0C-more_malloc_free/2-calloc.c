#include "main.h"
#include <stdlib.h>
/**
* _calloc - function that allocates memory for an array
*@nmemb: number of elements
*@size: size of the memory block
*Return: pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
		if (ptr == NULL)
			return (NULL);
	for (a = 0; a < (nmemb * size); a++)
	{
		ptr[a] = 0;
		a++;
	}
	return (ptr);
}
