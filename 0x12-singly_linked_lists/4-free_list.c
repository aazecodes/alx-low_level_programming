#include "lists.h"
/**
 *free_list - a function that frees a list
 *@head: A pointer to the list head
 *Return: nothing
 */
void free_list(list_t *head)
{
	list_t *copy;

	while (head)
	{
		copy = head->next;
		free(head->str);
		free(head);
		head = copy;
	}
	head = NULL;
}
