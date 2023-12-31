#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - function that reallocates memory
 * @ptr: pointer to the memory allocated
 * @old_size: size in bytes of the allocated space
 * @new_size: new size of new memory
 * Return: Pointer or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		nptr = malloc(new_size);
		if (nptr == NULL)
			return (NULL);
		return (nptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	nptr = malloc(new_size);
	if (nptr == NULL)
		return (NULL);
	for (a = 0; a < old_size && a < new_size; a++)
	{
		nptr[a] = ((char *) ptr)[a];
	}
	free(ptr);
	return (nptr);
}
