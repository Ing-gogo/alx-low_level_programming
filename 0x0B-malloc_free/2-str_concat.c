#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer or NULL
 */
char *str_concat(char *s1, char *s2)
{
	int h = 0, i = 0, j = 0, k = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[h])
		h++;
	while (s2[i])
		i++;

	k = h + i;
	s = malloc((sizeof(char) * k) + 1);

	if (s == NULL)
		return (NULL);

	i = 0;

	while (j < k)
	{
		if (j <= h)
			s[j] = s1[j];
		if (j >= h)
		{
			s[j] = s2[i];
			i++;
		}
		j++;
	}
	s[j] = '\0';
	return (s);
}
