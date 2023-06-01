#include "lists.h"
/**
 * add_node_end - a function that adds a new node at the end of a list
 *@head: pointer to the head of the list
 *@str: string to be added to the list
 *Return: address of the element or NULL
*/
list_t *add_node_end(list_t **head, const char *str)
{
	char *copy;
	int len = 0;
	list_t *element, *last_el;

	element = malloc(sizeof(list_t));
	if (!element)
		return (NULL);
	copy = strdup(str);
	if (str == NULL)
	{
		free(element);
		return (NULL);
	}
	while (str[len])
		len++;
	element->str = copy;
	element->len = len;
	element->next = NULL;
	if (*head == NULL)
		*head = element;
	else
	{
		last_el = *head;
		while (last_el->next != NULL)
			last_el = last_el->next;
		last_el->next = element;
	}
	return (*head);
}
