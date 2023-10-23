#include "lists.h"

/**
 * sum_listint - function that return sum of all the data of a list
 * @head: pointer to head
 * Return: sum or 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
