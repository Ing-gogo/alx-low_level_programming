#include "lists.h"

/**
 * get_dnode_at_index - gets a specified node of a linked list
 * @head: pointer to first node
 * @index: node to be retrieved
 * Return: pointer to retrieved node or NULL for failure
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int a;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	for (a = 0; a < index; a++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}

