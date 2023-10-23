#include "lists.h"

/**
 * print_listint - function that prints all elements of a list
 * @h: head pointer
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t x;

	if (h == NULL)
		return (0);
	for (x = 0; h != NULL; x++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (x);
}
