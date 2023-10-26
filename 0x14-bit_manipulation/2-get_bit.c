#include "main.h"

/**
 * get_bit - function that returns the value of a bit at agiven index
 * @n: checks bits
 * @index: where bit is checked
 * Return: value of bit or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int a, b;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	a = 1 << index;
	b = n & a;

	if (b == a)
		return (1);
	return (0);
}
