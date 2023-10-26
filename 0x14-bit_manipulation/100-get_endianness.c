#include "main.h"

/**
 * get_endianness - function checking endianness
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *b = (char *)&a;

	if (*b == 1)
		return (1);
	else
		return (0);
}


