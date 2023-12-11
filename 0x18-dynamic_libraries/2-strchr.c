#include <stdio.h>
#include "main.h"
/**
 * _strchr - string character function
 * @s: input
 * @c: input
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int d;

	for (d = 0 ; s[d] >= '\0' ; d++)
	{
		if (s[d] == c)
			return (s + d);
	}
	return (NULL);
}
