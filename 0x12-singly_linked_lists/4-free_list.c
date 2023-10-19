#include "lists.h"
/**
 * free_list - frees nodes
 * @head: pointer to the head node
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *node, *nextnode;

	if (!head)
		return;
	node = head;
	while (node)
	{
		nextnode = node->next;
		free(node->str);
		node = nextnode;
	}
}
