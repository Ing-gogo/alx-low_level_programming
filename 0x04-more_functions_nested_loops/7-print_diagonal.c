#include "main.h"
/**
 * print_diagonal - printing  diagonals
 * @n: number of times \ is used
 * Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
	int y, z;

	for (y = 0 ; y < n ; y++)
	{
	for (z = 0 ; z <= y ; z++)
	_putchar(' ');
	_putchar('\\');
		_putchar('\n');
	}
	}
}
