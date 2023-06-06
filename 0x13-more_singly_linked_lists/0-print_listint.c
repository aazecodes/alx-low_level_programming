#include "lists.h"
/**
 * print_listint - a function tha prints all the elements of a list.
 * @h: head of a list.
 *
 * Return: the numbers of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t counts = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counts += 1;
	}
	return (counts);
}
