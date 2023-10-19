#include "lists.h"

/**
 * list_len - finds the length of linked list
 * @h: pointer to first node
 * Return: length of list
 */
size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		h = h->next;
		a++;
	}
	return (a);
}
