#include "main.h"
/**
 * _strcat - function that terminates null byte
 * @dest: destination
 * @src: source
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int srclen = 0;
	int a;

	for (a = 0 ; dest[a] != '\0' ; a++)
		destlen++;
	for (a = 0 ; src[a] != '\0' ; a++)
		srclen++;
	for (a = 0 ; a <= srclen ; a++)
	{
		dest[destlen + a] = src[a];
	}
	return (dest);
}