#include "lists.h"

/**
 * empt_listp1- frees a linked list
 * @head: head of a list.
 * Return: Nothing
 */
void empt_listp1(listp_t **head)
{
	listp_t *a, *b;

	if (head != NULL)
	{
		b = *head;
		while ((a = b) != NULL)
		{
			b = b->next;
			free(a);
		}
	}
}

/**
 * free_listint_safe - frees a linked list.
 * @h: head of a list.
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listp_t *temp = NULL, *new, *prev;
	listint_t *rec;
	size_t num = 0;

	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));
		if (new == NULL)
			exit(98);
		new->p = (void *)*h;
		new->next = temp;
		temp = new;
		prev = temp;
	while (prev->next != NULL)
	{
		prev = prev->next;
		if (*h == (listint_t *)prev->p)
		{
			*h = NULL;
			empt_listp1(&temp);
			return (num);
		}
	}

		rec = *h;
		*h = (*h)->next;
		free(rec);
		num++;
	}

	*h = NULL;
	empt_listp1(&temp);
	return (num);
}
