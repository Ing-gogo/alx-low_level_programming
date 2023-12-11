#include "main.h"
/**
 * _abs - checking for absolute values
 * @a: parameter checked
 * Return: -a or a
 */
int _abs(int a)
{
	if (a < 0)
		return (-a);
	else if (a > 0)
		return (a);
	return (0);
}

