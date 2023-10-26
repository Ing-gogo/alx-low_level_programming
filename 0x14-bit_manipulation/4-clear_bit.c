#include "main.h"

/**
 * clear_bit - function that sets the value of bit to 0 at a given index
 * @n: pointer to number to be changed
 * @index: position
 * Return: 1 or _1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
