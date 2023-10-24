#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes a node at index
 * @head: pointer to head pointer
 * @index: node to be deleted
 * Return: 1 for success, -1 for failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a;
	listint_t *x;
	listint_t *y;

	x = *head;

	if (head == NULL || *head == NULL)
		return (-1);
	for (a = 0; a < index - 1 && x != NULL && index != 0; a++)
		x = x->next;
	if (index == 0)
	{
		y = x->next;
		free(x);
		*head = y;
	}
	else
	{
		if (x->next == NULL)
			y = x->next;
		else
			y = x->next->next;
		free(x->next);
		x->next = y;
	}
	return (1);
}

