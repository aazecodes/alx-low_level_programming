#include "lists.h"
/**
 * sum_listint - a function that returns the sum of all the data (n) of
 * a linked list.
 * @head: head of a list.
 * Return: sum of all the data (n).
 */
int sum_listint(listint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
