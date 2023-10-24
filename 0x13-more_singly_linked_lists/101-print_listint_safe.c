#include "lists.h"
/**
 * _r - reallocates memory of an array pointer
 * @list: old list
 * @size: size of new list
 * @new: new list
 * Return: pointer to new list
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **newlist;
	size_t a;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (a = 0; a < size - 1; a++)
		newlist[a] = list[a];
	newlist[a] = new;
	free(list);
	return (newlist);
}
/**
 * print_listint_safe - function printing listint lists
 * @head: pointer to head
 * Return: number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t a, nbr = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (a = 0; a < nbr; a++)
		{
			if (head == list[a])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (nbr);
			}
		}
			nbr++;
			list = _r(list, nbr, head);
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
	}
		free(list);
		return (nbr);
}

