#include "lists.h"
/**
 * pop_listint - a function that deletes the head node of
 * a linked list
 * @head: head of a list.
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int element;
	listint_t *temp, *temp1;

	if (*head == NULL)
		return (0);
	temp1 = *head;
	element = temp1->n;
	temp = temp1->next;
	 free(temp1);
	*head = temp;
	return (element);
}
