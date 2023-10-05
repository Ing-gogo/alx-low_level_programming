#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: smallest number
 * @max: largest number
 * Return: pointer or NULL
 */
int *array_range(int min, int max)
{
	int *c, a = 0;

	if (min > max)
		return (NULL);

	c = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (c == NULL)
		return (NULL);
	for (a = 0; a <= max - min; a++)
	{
		c[a] = min + a;
	}
	return (c);
}
