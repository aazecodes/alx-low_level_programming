#include "lists.h"
/**
* print_listint_safe - Prints a linked list
* @head: listint_t head
* Return: the number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *element, *prev;
	size_t num1, num2;

	num1 = 0;
	element = head;
	while (element != NULL)
	{
		printf("[%p] %d\n", (void *)element, element->n);
		num1 += 1;
		element = element->next;
		prev = head;
		for (num2 = 0; num2 < num1; num2++)
		{
			if (element == prev)
			{
				printf("-> [%p] %d\n", (void *)element, element->n);
				return (num1);
			}
			prev = prev->next;
		}
	}
	return (num1);
}
