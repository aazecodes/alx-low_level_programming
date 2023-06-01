#include "lists.h"
/**
 * add_node - a function that adds a new node at the beginning of a list.
 *@head: pointer to the head of the list
 *@str: string to be added
 * Return: returns the address of the new element or NULL
*/

list_t *add_node(list_t **head, const char *str)
{
	char *copy;
	int len = 0;
	list_t *element;

	element = malloc(sizeof(list_t));
	if (!element)
		return (NULL);
	copy = strdup(str);
	if (copy == NULL)
	{
		free(element);
		return (NULL);
	}
	while (str[len])
		len++;
	element->str = copy;
	element->len = len;
	element->next = *head;
	*head = element;
	return (element);
}
