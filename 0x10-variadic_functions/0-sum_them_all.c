#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all parameters
 * @n: number of parameters passed to the function
 * @...: variable number of parameters to be summed
 * Return: 0 or sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ig;
	unsigned int i, sum = 0;

	va_start(ig, n);
	for (i = 0; i < n; i++)
		sum = sum + va_arg(ig, int);
	va_end(ig);
	return (sum);
}
