#include "lists.h"
/**
 * add_node - function adding a new node
 * @head: pointer to head node
 * @str: string
 * Return: size of list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int a, x = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	for (a = 0; str[a] != '\0'; a++)
		x++;
	new->len = x;
	new->next = *head;
	*head = new;

	return (*head);


}

