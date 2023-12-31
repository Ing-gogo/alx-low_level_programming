#include "lists.h"

/**
 * add_dnodeint - function adding a new node at the beginning of linked list
 * @head: pointer to a pointer to beginning of a linked list
 * @n: new node added
 * Return: pointer to the new node or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	if (new->next != NULL)
		(new->next)->prev = new;
	return (new);
}
