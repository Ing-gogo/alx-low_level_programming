#include "main.h"
/**
 * reverse_array - reverses contents of an array
 * @a:parameter1
 * @n: parameter2
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int c;
	int b;

	for (c = 0 ; c < n / 2 ; c++)
	{
		b = a[c];
		a[c] = a[n - 1 - c];
		a[n - 1 - c] = b;
	}
}
