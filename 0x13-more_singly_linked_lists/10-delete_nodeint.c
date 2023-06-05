#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of a linked list.
 * @head: head of a list.
 * @index: list where the node is deleted
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del, *prev;
	unsigned int num = 0;

	if (*head == NULL)
		return (-1);
	del = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(del);
		return (1);
	}
	while (num < index && del != NULL)
	{
		prev = del;
		del = del->next;
		num++;
	}
	if (del == NULL)
		return (-1);
	prev->next = del->next;
	free(del);
	return (1);
}
