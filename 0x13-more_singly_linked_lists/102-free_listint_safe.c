#include "lists.h"

/**
 * find_listint_loop_fl - finds loop in linked list
 * @head: pointer to head
 * Return: address of node where loop starts or NULL if no loop
 */
listint_t *find_listint_loop_fl(listint_t *head)
{
	listint_t *a, *b;

	if (head == NULL)
		return (NULL);

	for (b = head->next; b != NULL; b = b->next)
	{
		if (b == b->next)
			return (b);
		for (a = head; a != b; a = a->next)
			if (a == b->next)
				return (b->next);
	}
	return (NULL);
}
/**
 * free_listint_safe - function that frees a linked list
 * @h: pointer to head pointer
 * Return: size of freed list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *node;
	size_t l;
	int m = 1;

	if (h == NULL || *h == NULL)
		return (0);
	node = find_listint_loop_fl(*h);
	for (l = 0; (*h != node || m) && *h != NULL; *h = next)
	{
		l++;
		next = (*h)->next;
		if (*h == node && m)
		{
			if (node == node->next)
			{
				free(*h);
				break;
			}
			l++;
			next = next->next;
			free((*h)->next);
			m = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (l);
}
