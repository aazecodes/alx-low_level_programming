#include "lists.h"
/**
 * free_listint2 - a function that frees a linked list
 * @head: head of a list.
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *element;

	if (head != NULL)
	{
		temp = *head;
		while ((element = temp) != NULL)
		{
			temp = temp->next;
			free(element);
		}
	*head = NULL;
	}
}
