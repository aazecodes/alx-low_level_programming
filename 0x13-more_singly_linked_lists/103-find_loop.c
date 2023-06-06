#include "lists.h"
/**
 * find_listint_loop - a function that finds the loop in a linked list.
 * @head: Pointer to head
 * Return: address of node or Null
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *start, *end;

	start = end = head;
	if (!head)
		return (NULL);
	while (start && end && end->next)
	{
		start = start->next;
		end = end->next->next;
		if (start == end)
		{
			start = head;
			while (start != end)
			{
				start = start->next;
				end = end->next;
			}
			return (start);
		}
	}
	return (NULL);
}
