#include "lists.h"
/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 * Return: pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *temp = NULL;

	while (*head != NULL)
	{
		temp = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = temp;
	}
	*head = prev;
	return (*head);
}
