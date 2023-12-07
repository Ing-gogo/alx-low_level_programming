#include "lists.h"

/**
 * dlistint_len - function counting number of nodes in a linked list
 * @h: pointer to the starting point of a list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t a;

	for (a = 0; h != NULL; a++)
		h = h->next;
	return (a);
}
