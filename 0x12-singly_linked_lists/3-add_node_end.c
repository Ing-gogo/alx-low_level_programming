#include "lists.h"

/**
 * add_node_end - function that adds a node at the end
 * @str: string to be duplicated
 * @head: head of the node
 * Return: address to element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *yy;
	unsigned int i, x = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		x++;
	new->len = x;
	new->next = NULL;
	yy = *head;
	if (yy == NULL)
		*head = new;
	else
	{
		while (yy->next != NULL)
			yy = yy->next;
		yy->next = new;
	}
	return (*head);
}
