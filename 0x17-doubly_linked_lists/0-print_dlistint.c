#include "lists.h"

/**
 * print_dlistint - function printing elements of a list
 * @h: pointer to the beginning of the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t x;

	for (x = 0; h != NULL; x++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (x);
}
