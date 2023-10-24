#include "lists.h"

/**
 * reverse_listint - function that reverses a list
 * @head: pointer to head pointer
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *new_temp;


	if (head == NULL || *head == NULL)
		return (NULL);
	temp = *head;
	*head = temp->next;
	temp->next = NULL;

	while (*head != NULL)
	{
		new_temp = (*head)->next;
		(*head)->next = temp;
		temp = *head;

		if (new_temp == NULL)
			return (*head);
		*head = new_temp;
	}
	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}
	return (NULL);
}
