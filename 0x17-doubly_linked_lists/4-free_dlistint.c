#include "lists.h"

/**
 * free_dlistint - frees dlistint_t
 * @head: pointer to the starting point of linked list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
