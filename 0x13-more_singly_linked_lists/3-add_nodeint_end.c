#include "lists.h"
/**
 * add_nodeint_end - a function that add a new node at the end
 * of a linked list
 * @head: head of a list.
 * @n: element
 * Return: address of the new element or NUll if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *element;
	listint_t *temp = *head;

	element = malloc(sizeof(listint_t));
	if (element == NULL)
		return (NULL);
	element->n = n;
	element->next = NULL;
	if (*head == NULL)
	{
		*head = element;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = element;
	}
	return (*head);
}
