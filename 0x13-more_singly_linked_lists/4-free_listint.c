#include "lists.h"
/**
*free_listint - a function that frees a linked list
*@head: head of the list
*Return: Nothing
*/
void free_listint(listint_t *head)
{
	listint_t *element;

	while (head != NULL)
	{
		element = head;
		head = head->next;
		free(element);
	}
}
