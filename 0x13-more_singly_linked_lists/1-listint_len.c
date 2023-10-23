#include "lists.h"

/**
 * listint_len - function to print number of elements
 * @h: head pointer to list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	if (h == NULL)
		return (0);
	for (x = 0; h != NULL; x++)
	{
		h = h->next;
	}
	return (x);
}
