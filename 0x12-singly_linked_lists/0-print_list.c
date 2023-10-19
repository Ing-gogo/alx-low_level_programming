#include "lists.h"
/**
 * _strlen - finds length of the str
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int a = 0;

	if (!s)
		return (0);
	while (*s++)
		a++;
	return (a);
}

/**
 * print_list - function printing elements of a list_t
 * @h: linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("[%d]%s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		nodes++;
	}
	return (nodes);
}
