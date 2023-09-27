#include "main.h"
/**
 * _pow_recursion - function that prints the value of x raised to power by y
 * @x: base
 * @y: exponent
 * Return: value of x power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
