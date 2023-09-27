#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - finds the natural square root
 * @n: integer
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - calculate natural square root
 * @n: number used
 * @a: integer
 * Return: natural square root
 */

int _sqrt(int n, int a)
{
	int sqrt = a * a;

	if (sqrt > n)
	{
		return (-1);
	}
	else if (sqrt == n)
	{
		return (a);
	}
	else
	{
		return (_sqrt(n, a + 1));
	}
}

