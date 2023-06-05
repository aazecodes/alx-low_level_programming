#include "lists.h"
/**
 * add_nodeint - a function that add a new node at the beginning
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 * Return: address of the new element or NUll if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *element;

	element = malloc(sizeof(listint_t));
	if (element == NULL)
		return (NULL);
	element->n = n;
	element->next = *head;
	*head = element;
	return (*head);
}
