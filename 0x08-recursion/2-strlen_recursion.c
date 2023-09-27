#include "main.h"
/**
 * _strlen_recursion - function that prints the length of a string
 * @s: string to be measured
 * Return: integer value
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}


