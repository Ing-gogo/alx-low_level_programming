#include "lists.h"

/**
 * add_dnodeint_end - adds node at the end of a linked list
 * @head: pointer to pointer to the starting point of a linked list
 * @n: value added to new node
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *t;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	t = *head;
	while (t->next != NULL)
		t = t->next;
	t->next = new;
	new->prev = t;
	return (new);
}


