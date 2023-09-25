#include "main.h"
/**
 * _memcpy - function name
 * @dest: destination
 * @src: source
 * @n: input
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int b;


	for (b = 0 ; b < n ; b++)
		dest[b] = src[b];
	return (dest);
}

