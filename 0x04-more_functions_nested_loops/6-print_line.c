#include "main.h"
/**
 * print_line - printing a line
 * @n: parameter used
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
	int x;

	for (x = 0 ; x < n ; x++)
	_putchar('_');
	_putchar('\n');
	}
}
