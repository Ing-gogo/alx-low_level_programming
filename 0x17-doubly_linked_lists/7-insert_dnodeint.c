#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts new node at specified given position
 * @h: pointer to pointer to beginning of linked list
 * @idx: point of to insert new node
 * @n: data entered to new node
 * Return: pointer to new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *next, *c;
	unsigned int a;

	if (h == NULL)
		return (NULL);
	if (idx != 0)
	{
		c = *h;
		for (a = 0; a < idx - 1 && c != NULL; a++)
			c = c->next;
		if (c == NULL)
			return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		next = *h;
		*h = new;
		new->prev = NULL;
	}
	else
	{
		new->prev = c;
		next = c->next;
		c->next = new;
	}
	new->next = next;
	if (new->next != NULL)
		new->next->prev = new;
	return (new);
}
