#include "lists.h"

/**
 * sum_dlistint - function summing up all data of a linked list
 * @head: pointer to beginning of linked list
 * Return: sum of all data or 0
 */
int sum_dlistint(dlistint_t *head)
{
	int s = 0;

	while (head != NULL)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
