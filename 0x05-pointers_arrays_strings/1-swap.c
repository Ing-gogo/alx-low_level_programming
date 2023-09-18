#include "main.h"
/**
 * swap_int - swapping integers
 * @a:integer1
 * @b:integer2
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int d;

	d = *a;
	*a = *b;
	*b = d;
}
