#include "main.h"

/**
 * _pow - function calculating power of a base
 * @base: value raised to a given power
 * @power: value at which the base is raised to
 * Return: value of base raised to power
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int a;
	unsigned int b;

	a = 1;

	for (b = 1; b <= power; b++)
		a = a * base;
	return (a);
}

/**
 * print_binary - prints a number in binary
 * @n: number to be printed
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int d, c;
	char x;

	x = 0;
	d = _pow(2, sizeof(unsigned long int) * 8 - 1);

	while (d != 0)
	{
		c = n & d;
		if (c == d)
		{
			x = 1;
			_putchar ('1');
		}
		else if (x == 1 || d == 1)
		{
			_putchar('0');
		}
		d >>= 1;
	}
}
