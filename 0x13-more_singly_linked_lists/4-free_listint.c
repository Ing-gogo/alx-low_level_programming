#include "lists.h"

/**
 * free_listint - function freeing a linked list
 * @head: pointer to head
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
