#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function returning pointer to 2 dimensional array of integers
 * @width: measure of wide
 * @height: measure of how long
 * Return: pointer or NULL
 */
int **alloc_grid(int width, int height)
{
	int a, b, c, d;
	int **s;

	if (width <= 0 || height <= 0)
		return (NULL);
	s = malloc(sizeof(int *) * height);

	if (s ==  NULL)
	{
		free(s);
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		s[a] = malloc(sizeof(int) * width);
		if (s[a] == NULL)
		{
			for (b = a; b >= 0; b--)
			{
				free(s[b]);
			}
			free(s);
			return (NULL);
		}
	}
	for (c = 0; c < height; c++)
	{
		for (d = 0; d < width; d++)
		{
			s[c][d] = 0;
		}
	}
	return (s);
}
