#include "lists.h"

/**
 * delete_dnodeint_at_index - function deleting node at given index
 * @head: pointer to pointer to linked lists
 * @index: index at which to delete node
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *c;
	unsigned int a;

	if (head == NULL || *head == NULL)
		return (-1);
	c = *head;
	if (index == 0)
	{
		*head = c->next;
		if (c->next != NULL)
		{
			c->next->prev = NULL;
		}
		free(c);
		return (1);
	}
	for (a = 0; a < index; a++)
	{
		if (c->next == NULL)
			return (-1);
		c = c->next;
	}
	c->prev->next = c->next;
	if (c->next != NULL)
		c->next->prev = c->prev;
	free(c);
	return (1);
}


