#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - function that allocates memory to an array
 * @nmemb: number of members
 * @size: number of bytes
 * Return: pointer or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int x = 0, y = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	y = nmemb * size;
	p = malloc(y);

	if (p == NULL)
		return (NULL);
	while (x < y)
	{
		p[x] = 0;
		x++;
	}
	return (p);
}
