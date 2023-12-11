#include "main.h"
#include <string.h>
/**
 * _strncat - name of function
 * @dest: destination
 * @src:source
 * @n: integer
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int b;

	for (b = 0 ; b < n && *src != '\0' ; b++)
	{
		dest[len + b] = *src;
		src++;
	}
	dest[len + b] = '\0';
	return (dest);
}
