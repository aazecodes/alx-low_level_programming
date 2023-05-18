#include "main.h"
#include <stdlib.h>
/**
 * _realloc -  a function that reallocates a memory
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int a;
	void *mem;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		mem = malloc(new_size);
		return (mem);
	}
	else if (new_size == old_size)
		return (ptr);
	mem = malloc(new_size);
		if (mem == NULL)
			return (NULL);
		for (a = 0; a < (old_size || a < new_size); a++)
		{
			*((char *)mem + a) = *((char *) ptr + a);
		}
		free(ptr);
		return (mem);
}
