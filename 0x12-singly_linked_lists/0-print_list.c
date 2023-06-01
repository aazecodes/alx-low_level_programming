#include "lists.h"

/**
* print_list - prints all the elements of a list
* @h:pointer to the list
*Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	const list_t *ptr = h;
	int count_nodes = 0;

	while (ptr)
	{
		if (ptr->str)
			printf("[%d] %s\n", ptr->len, ptr->str);
		else
			printf("[0] (nil)\n");

		count_nodes += 1;
		ptr = ptr->next;
	}

	return (count_nodes);
}
