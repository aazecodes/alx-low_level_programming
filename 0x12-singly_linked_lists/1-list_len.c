#include "lists.h"
/**
 * list_len - a function that reurns the number of elements in a linked list
 *@h: pointer to the list
 *Return: the number of elements
*/

size_t list_len(const list_t *h)
{
	int elements = 0;

	while (h)
	{
		elements += 1;
		h = h->next;
	}
	return (elements);
}
