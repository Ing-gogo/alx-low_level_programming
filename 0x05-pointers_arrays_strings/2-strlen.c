#include "main.h"
/**
 * strlen - measures the length of string
 * @s: string measured
 * Return: length of string
 */
int _strlen(char *s)
{
	int x;
	int count = 0;

	for (x = 0 ; s[x] != '\0' ; x++)
		count++;
	return (count);
}
