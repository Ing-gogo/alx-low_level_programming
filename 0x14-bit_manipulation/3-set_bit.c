#include "main.h"
/**
 * set_bit - function that sets value of bit to 1 at any index
 * @n: pointer to number to be set
 * @index: starting point
 * Return: 1 or -1 for error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	a = 1 << index;
	*n = *n | a;
	return (1);
}
