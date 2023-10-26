#include "main.h"

/**
 * flip_bits - function that counts the number of bits to flip to get new nbr
 * @n: number1
 * @m: number2
 * Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, y = 0;
	unsigned long int old;
	unsigned long int new = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		old = new >> x;
		if (old & 1)
			y++;
	}
	return (y);
}
